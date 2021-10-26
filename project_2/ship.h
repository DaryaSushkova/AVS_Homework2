#ifndef PROJECT_2_SHIP_H
#define PROJECT_2_SHIP_H

#include <stdio.h>
#include "random.h"
#include "transport.h"

// Класс корабля.
class ship : public transport {
private:
    int displacement; // Водоизмещение.
    // Вид судна - перечислимый тип.
    enum ship_type { LINER, TUGBOAT, TANKER } type;

public:
    // Явный конструктор.
    ship(int s, double d, int dis, int index);
    // Конструктор по умолчанию.
    ship():ship(0, 0, 0, 0) {};

    // Методы для извлечения параметров.
    int GetDisplacement() {
        return displacement;
    }
    char* GetType();

    // Перегрузка ввода из файла.
    int In(FILE* in_file) override;

    // Перегрузка генерирования транспорта.
    void InRnd() override;

    // Вывод характеристик корабля в файл.
    void Out(FILE* out_file) override;

    // Вывод рандомных характеристик корабля в файл.
    void OutRnd(FILE* file) override;
};

#endif //PROJECT_2_SHIP_H
