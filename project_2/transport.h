#ifndef PROJECT_2_TRANSPORT_H
#define PROJECT_2_TRANSPORT_H

#include <stdio.h>

// Абстрактный класс, описывающий пассажирский транспорт.
class transport {
private:
    int speed; // Скорость - общая переменная.
    double distance; // Расстояние между пунктами отправления и назначения - общая переменная.

public:
    // Тип транспорта.
    enum transport_type { AIRPLANE, TRAIN, SHIP } type;

    // Методы для извлечения общих параметров.
    int GetSpeed() {
        return speed;
    }
    double GetDistance() {
        return distance;
    }

    // Явный конструктор.
    transport(int s = 0, double d = 0) : speed(s), distance(d) {}
    // Конструктор по умолчанию.
    transport():transport(0, 0) {}

    // Деструктор класса.
    virtual ~transport() = default;

    // Ввод обобщенного пассажирского транспорта из входного потока.
    virtual int In(FILE* in_file);

    // Случайный ввод обобщенного пассажирского транспорта.
    virtual void InRnd();

    // Метод получения конечного транспорта из входного потока.
    static transport* GetTransport(FILE* in_file);

    // Вывод обобщенного пассажирского транспорта в файл.
    virtual void Out(FILE* out_file) = 0;

    // Вывод рандомного обобщенного пассажирского транспорта в файл.
    virtual void OutRnd(FILE* file) = 0;

    // Вычисление идеального времени прохождения пути.
    double GetTime();
};

#endif //PROJECT_2_TRANSPORT_H
