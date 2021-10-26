#include "ship.h"

// Конструктор корабля.
ship::ship(int s, double d, int dis, int index) : transport(s, d) {
    displacement = dis;
    switch (index) {
        case 0:
            type = ship::LINER;
            break;
        case 1:
            type = ship::TUGBOAT;
            break;
        case 2:
            type = ship::TANKER;
            break;
    }
}

// Перегрузка родительского метода ввода данных из файла.
int ship::In(FILE* in_file) {
    transport::In(in_file);
    // Характеристики корабля.
    int dis = 0, t = 0;
    int count_of_value = fscanf(in_file, "%d %d\n", &dis, &t);
    // Проверка валидности входного потока.
    if (count_of_value != 2) {
        return 1;
    }
    else {
        // Присваиваем считанные значения.
        displacement = dis;
        switch (t) {
            case 0:
                type = ship::LINER;
                return 0;
            case 1:
                type = ship::TUGBOAT;
                return 0;
            case 2:
                type = ship::TANKER;
                return 0;
            default:
                return 1;
        }
    }
}

// Перегрузка родительского метода генерации транспорта.
void ship::InRnd() {
    transport::InRnd();
    // Генерация водоизмещения.
    displacement = IntRnd(1, 20000);
    // Генерация типа корабля.
    int type = IntRnd(0, 3);
    switch (type) {
        case 0:
            type = ship::LINER;
            break;
        case 1:
            type = ship::TUGBOAT;
            break;
        case 2:
            type = ship::TANKER;
            break;
    }
}

// Вывод характеристик поезда в файл.
void ship::Out(FILE* out_file) {
    fprintf(out_file, "Ship: displacement = %d, type = %s, speed = %d, distance = %lf, time = %lf\n",
            GetDisplacement(), GetType(), GetDistance(), GetTime());
}

// Вывод рандомных характеристик поезда в файл.
void ship::OutRnd(FILE* file) {
    fprintf(file, "%d %lf\n2\n%d %d\n",
            GetSpeed(), GetDistance(), GetDisplacement(), type);
}

// Получение типа корабля.
char* ship::GetType() {
    char* ship_types[] = { "LINER", "TUGBOAT", "TANKER" };
    return ship_types[type];
}
