//
// Created by Titkos on 06/12/2018.
//

#ifndef CUBOID_CUBOID_H
#define CUBOID_CUBOID_H

typedef struct{
    float a;
    float b;
    float c;

}rectangular_cuboid_t;

float rect_cub_volume(rectangular_cuboid_t rectangular_cuboid);
float rect_cub_surface(rectangular_cuboid_t rectangular_cuboid);


#endif //CUBOID_CUBOID_H
