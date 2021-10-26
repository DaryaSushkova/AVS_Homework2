#ifndef PROJECT_2_AIRPLANE_H
#define PROJECT_2_AIRPLANE_H

#include <stdio.h>
#include "random.h"
#include "transport.h"

// Описание класса самолета самолета.
class airplane: public transport {
private:
    int range_of_flight; // Дальность полета.
    int lifting_capacity; // Грузоподъемность.

public:
    // Явный конструктор.
    airplane(int s, double d, int ran, int cap)
         : transport(s, d), range_of_flight(ran), lifting_capacity(cap) {}
    // Конструктор по умолчанию.
    airplane():airplane(0, 0, 0, 0) {};

    // Методы для извлечения параметров.
    int GetRange() {
        return range_of_flight;
    }
    int GetCapacity() {
        return lifting_capacity;
    }

    // Перегрузка ввода из файла.
    int In(FILE* in_file) override;

    // Перегрузка генерирования транспорта.
    void InRnd() override;

    // Вывод характеристик самолета в файл.
    void Out(FILE* out_file) override;

    // Вывод рандомных характеристик самолета в файл.
    void OutRnd(FILE* file) override;
};

#endif //PROJECT_2_AIRPLANE_H
