#include <stdio.h>
#include "coordinate.h"
#include <time.h>

int main() {

    coordinates_t coordinates1;
    coordinates1.x =10;
    coordinates1.y = 15;

    coordinates_t coordinates2;
    coordinates2.x =20;
    coordinates2.y = 25;

    coordinates_t cords[] = {coordinates1, coordinates2};
    for (int i = 0; i < sizeof(cords)/ sizeof(cords[0]) ; ++i) {
      printf("x:%d y:%d", cords[i].x,cords[i].y);
    }


    return 0;
}