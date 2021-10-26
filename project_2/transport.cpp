#include "transport.h"
#include "airplane.h"
#include "train.h"
#include "ship.h"

// Ввод общих параметров пассажирского транспорта.
int transport::In(FILE* in_file) {
    int s;
    double d;
    int count_of_value = fscanf(in_file, "%d %lf\n", &s, &d);
    if (count_of_value != 2) {
        return 1;
    }
    speed = s;
    distance = d;
    return 0;
}

// Метод получения конечного транспорта из входного потока.
transport* transport::GetTransport(FILE* in_file) {
    int type;
    int count = fscanf(in_file, "%d\n", &type);
    if (count != 1) {
        printf("Incorrect input data!\n");
        return NULL;
    }
    transport* tr;
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
            return NULL;
    }
    // Неверное считывание характеристик транспорта.
    if (tr->In(in_file)) {
        printf("Incorrect input data!\n");
        return NULL;
    }
    return tr;
}

// Случайное заполнение общих параметров.
void transport::InRnd() {
    speed = IntRnd(1, 1000);
    distance = DoubleRnd(1, 20000);
}

// Вычисление идеального времени прохождения пути.
double transport::GetTime() {
    return distance / speed;
}
