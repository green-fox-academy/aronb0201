//
// Created by Titkos on 06/12/2018.
//

#ifndef CAR_CAR_H
#define CAR_CAR_H

typedef enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA} car_type_t;

typedef struct {
    enum car_type type;
    double km;
    double gas;
}car_t;

void stat_print(car_t car);
int is_brand(car_t car, car_type_t type);
#endif //CAR_CAR_H
