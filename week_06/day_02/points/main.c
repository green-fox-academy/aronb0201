#include <stdio.h>
#include "point.h"

int main() {

    point_t point1 = create_point(1,1);
    point_t point2 = create_point(1,5.5);

    float dist = distance_between_points(point1,point2);

    printf("%f",dist );



    return 0;
}