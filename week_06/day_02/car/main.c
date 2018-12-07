#include <stdio.h>
#include "car.h"


int main() {


    car_t car1;
    car1.type = TOYOTA;
    car1.gas = 130;
    car1.km = 13000;

    car_t car2;
    car2.type = TESLA;
    car2.km = 14440;
    car2.gas = 400;

    stat_print(car1);
    stat_print(car2);

    printf("Hello, World!\n");
    return 0;
}