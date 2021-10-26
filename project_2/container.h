#ifndef PROJECT_2_CONTAINER_H
#define PROJECT_2_CONTAINER_H

#include "transport.h"

// Контейнер, хранящий транспорт: самолеты, поезда или корабли.
class container {
private:
    static const int max_length = 10000; // Максимальное значение длины.
    int length;   // Длина текущего контейнера.
    transport** transports;  // Массив транспорта.

public:
    // Конструктор контейнера.
    container();

    // Деструктор контейнера.
    ~container();

    // Ввод содержимого контейнера из указанного потока.
    int In(FILE* in_file);

    // Случайный ввод содержимого контейнера.
    int InRnd(int count, FILE* file);

    // Вывод содержимого контейнера в указанный поток.
    void Out(FILE* out_file);

    // Сортировка элементов контейнера с помощью прямого выбора.
    void StraightSelection();
};

#endif //PROJECT_2_CONTAINER_H
