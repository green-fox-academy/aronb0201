#include <stdio.h>
#include "cuboid.h"

int main() {
    rectangular_cuboid_t rectangular_cuboid1;
    rectangular_cuboid1.a = 4;
    rectangular_cuboid1.b = 5;
    rectangular_cuboid1.c = 6;

    printf("%.2f\n", rect_cub_surface(rectangular_cuboid1));
    printf("%.2f\n", rect_cub_volume(rectangular_cuboid1));



    printf("Hello, World!\n");
    return 0;
}