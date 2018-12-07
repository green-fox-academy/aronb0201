//
// Created by Titkos on 06/12/2018.
//

#include <stdio.h>
#include "car.h"

void stat_print(car_t car){
if(car.type == VOLVO){
    printf("The type is a VOLVO, it has %d kilometers, and %d gas level.\n", car.km, car.gas);
}
else if(car.type == TOYOTA){
    printf("The type is a TOYOTA, it has %d kilometers, and %d gas level.\n", car.km, car.gas);
}
else if(car.type == LAND_ROVER){
    printf("The type is a LandRover, it has %d kilometers, and %d gas level.\n", car.km, car.gas);
}
else if(car.type == TESLA){
    printf("The type is a TESLA, it has %d kilometers.\n", car.km);
}


}

int is_brand(car_t car,  car_type_t type){
    return  car.type == type;
}
