#include "container.h"
#include "transport.h"
#include "airplane.h"
#include "train.h"
#include "ship.h"

// Конструктор контейнера.
container::container() {
    transports = new transport* [max_length];
    // Инициализация начальных данных.
    for (int index = 0; index < max_length; ++index) {
        transports[index] = NULL;
    }
    length = 0;
}

// Деструктор контейнера.
container::~container() {
    // Удаление элементов массива транспорта.
    for (int index = 0; index < length; ++index) {
        delete transports[index];
    }
    length = 0;
    delete transports;
}

// Ввод содержимого контейнера из указанного файла.
int container::In(FILE* in_file) {
    int number_of_transports = 0;
    // Считываем количество транспорта с входного потока.
    int count = fscanf(in_file, "%d\n", &number_of_transports);

    if (count != 1) {  // Считано больше данных, чем нужно.
        printf("Incorrect input data :(\n");
        return 1;
    }
    else if (number_of_transports > max_length) {  // Превышение размера контейнера.
        printf("The number of elements exceeded the container size equal to 10000!\n");
        return 1;
    }
    else if (number_of_transports < 0) {  // Ввод отрицательного числа.
        printf("The number of elements must be a non-negative number!\n");
        return 1;
    }
    else {  // Корректное число транспорта.
        for (int index = 0; index < number_of_transports; ++index) {
            transport* tr = transport::GetTransport(in_file);
            if (tr == NULL) {
                printf("Incorrect input data in element number: %d\n", index + 1);
                return 1;
            }
            else if (length >= max_length) {
                printf("The container is full!");
                return 1;
            }
            else {
                // Добавление транспорта при корректных данных.
                transports[length] = tr;
                ++length;
            }
        }
        return 0;
    }
}

// Случайный ввод содержимого контейнера.
int container::InRnd(int count, FILE* file) {
    if (count > max_length) {  // Длина больше максимального размера контейнера.
        printf("The number of elements exceeded the container size equal to 10000!\n");
        return 1;
    }
    else if (count < 0) {  // Длина - отрицательное число.
        printf("The number of elements must be a non-negative number!\n");
        return 1;
    }
    else {  // Запись количества элементов.
        fprintf(file, "%d\n", count);
    }
    for (int index = 0; index < count; ++index) {
        transport* tr;
        int type = IntRnd(0, 3);
        switch (type) {
            case 0:
                tr = new airplane();
                break;
            case 1:
                tr = new train();
                break;
            case 2:
                tr = new ship();
                break;
            default:
                printf("Incorrect input data!\n");
                return 1;
        }
        tr->InRnd();
        transports[length] = tr;
        ++length;
        tr->OutRnd(file);
    }
    return 0;
}

// Вывод содержимого контейнера в указанный поток.
void container::Out(FILE* out_file) {
    // Запись количества элементов.
    fprintf(out_file, "%d elements:", length);
    // Вывод каждого элемента.
    for (int index = 0; index < length; ++index) {
        fprintf(out_file, "\nNumber %d: ", index + 1);
        transports[index]->Out(out_file);
    }
}

// Сортировка элементов контейнера с помощью прямого выбора.
void container::StraightSelection() {
    // Сортировка по убыванию прямым выбором.
    for (int index = 0; index < length - 1; ++index) {
        // Временная переменная для хранения значения подстановки.
        transport* temporary_tr = transports[index];
        for (int index_2 = index + 1; index_2 < length; ++index_2) {
            if (transports[index_2]->GetTime() > transports[index]->GetTime()) {
                temporary_tr = transports[index];
                transports[index] = transports[index_2];
                transports[index_2] = temporary_tr;
            }
        }
    }
}