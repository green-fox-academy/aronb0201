//
// Created by Titkos on 06/12/2018.
//

#include "cuboid.h"

float rect_cub_volume(rectangular_cuboid_t rectangular_cuboid) {
    float volume = rectangular_cuboid.a * rectangular_cuboid.b * rectangular_cuboid.c;
    return volume;

}

float rect_cub_surface(rectangular_cuboid_t rectangular_cuboid) {
    float surface = 2 *
                     ((rectangular_cuboid.c * rectangular_cuboid.b) + (rectangular_cuboid.c * rectangular_cuboid.a) +
                      (rectangular_cuboid.a * rectangular_cuboid.b));
    return surface;
}