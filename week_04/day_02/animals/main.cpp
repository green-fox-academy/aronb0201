#include <iostream>
#include "Animal.h"

int main() {

    Animal animal1;
    std::cout << animal1.getThirst() << std::endl;

    animal1.play(animal1.getThirst(), animal1.getHunger());

    std::cout << animal1.getThirst() << std::endl;


    return 0;
}