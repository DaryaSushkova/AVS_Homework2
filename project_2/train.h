#ifndef PROJECT_2_TRAIN_H
#define PROJECT_2_TRAIN_H

#include <stdio.h>
#include "random.h"
#include "transport.h"

// Описание базовой структуры поезда.
class train : public transport {
private:
    int count_of_cars; // Количество вагонов.

public:
    // Явный конструктор.
    train(int s, double dis, int cars);
    // Конструктор по умолчанию.
    train():train(0, 0, 0) {};

    // Метод для извлечения параметра.
    int GetCars() {
        return count_of_cars;
    }

    // Перегрузка ввода транспорта из файла.
    int In(FILE* in_file) override;

    // Перегрузка генерирования транспорта.
    void InRnd() override;

    // Вывод характеристик поезда в файл.
    void Out(FILE* out_file) override;

    // Вывод рандомных характеристик поезда в файл.
    void OutRnd(FILE* file) override;
};

#endif //PROJECT_2_TRAIN_H
