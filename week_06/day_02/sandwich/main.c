#include <stdio.h>
#include "sandwich.h"
#include <string.h>


int main() {

    sandwich_t sandwich1;
    sandwich1.price = 10.0;
    sandwich1.weight = 20;
    strcpy(sandwich1.name, "Sonkas");

    sandwich_t sandwich2;
    sandwich2.price = 12.0;
    sandwich2.weight = 25;
    strcpy(sandwich2.name, "Sajtos");


    printf("%.2f\n", the_price(sandwich1, 2));

    printf("Hello, World!\n");
    return 0;
}