#include <stdio.h>

int main() {

    double a = 5;
    double b = 6;
    double c = 12;

    int surface = 2*((a*b)+(b*c)+(c*a));
    int volume = a*b*c;

    printf("surface of the cuboid is: %d\n", surface);
    printf("volume of the cuboid is: %d\n", volume);
    printf("Hello, World!\n");
    return 0;
}