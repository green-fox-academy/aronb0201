#include <stdio.h>
#include "personal_computer.h"

int main() {

    struct Computer computer;
    computer.cpu_speed_GHz = 3;
    computer.bits = 32;
    computer.ram_size_GB = 2;

    Notebook notebook1;
    notebook1.ram_size_GB = 4;
    notebook1.bits = 6;


    printf("%d\n", notebook1.bits);
    printf("%d\n", computer.ram_size_GB);
    return 0;
}