#include "airplane.h"

// Перегрузка родительского метода ввода данных из файла.
int airplane::In(FILE* in_file) {
    if (transport::In(in_file)) {
        return 1;
    }
    int range;
    int capacity;
    int count = fscanf(in_file, "%d %d\n", &range, &capacity);
    if (count != 2) {
        printf("Incorrect input data!\n");
        return 1;
    }
    range_of_flight = range;
    lifting_capacity = capacity;
    return 0;
}

// Перегрузка родительского метода генерации транспорта.
void airplane::InRnd() {
    transport::InRnd();
    // Генерация дальности полета.
    range_of_flight = IntRnd(1, 12000);
    // Генерация грузоподъемности (в тоннах).
    lifting_capacity = IntRnd(1, 150);
}

// Вывод характеристик самолета в файл.
void airplane::Out(FILE* out_file) {
    fprintf(out_file, "Airplane: range = %d, capacity = %d, speed = %d, distance = %lf, time = %lf\n",
            GetRange(), GetCapacity(), GetSpeed(), GetDistance(), GetTime());
}

// Вывод рандомных характеристик самолета в файл.
void airplane::OutRnd(FILE* file) {
    fprintf(file, "%d %lf\n0\n%d %d\n",
            GetSpeed(), GetDistance(), GetRange(), GetCapacity());
}
