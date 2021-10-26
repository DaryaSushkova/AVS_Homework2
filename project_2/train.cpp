#include "train.h"
// Конструктор поезда.
train::train(int s, double d, int cars) : transport(s, d) {
    count_of_cars = cars;
}

// Перегрузка родительского метода ввода данных из файла.
int train::In(FILE* in_file) {
    transport::In(in_file);
    int cars;
    int count = fscanf(in_file, "%d\n", &cars);
    if (count != 1) {
        printf("Incorrect input data!\n");
        return 1;
    }
    count_of_cars = cars;
    return 0;
}

// Перегрузка родительского метода генерации транспорта.
void train::InRnd() {
    transport::InRnd();
    // Генерация количества вагонов.
    count_of_cars = IntRnd(1, 50);
}

// Вывод характеристик поезда в файл.
void train::Out(FILE* out_file) {
    fprintf(out_file, "Train: cars = %d, speed = %d, distance = %lf, time = %lf\n",
            GetCars(), GetSpeed(), GetDistance(), GetTime());
}

// Вывод рандомных характеристик поезда в файл.
void train::OutRnd(FILE* file) {
    fprintf(file, "%d %lf\n1\n%d\n",
            GetSpeed(), GetDistance(), GetCars());
}