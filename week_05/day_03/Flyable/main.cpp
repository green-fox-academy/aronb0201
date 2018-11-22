#include <iostream>
#include "Flyable.h"
#include "Helicopter.h"
#include "Vehicle.h"

int main() {

    Helicopter heli;
    heli.takeOff();
    heli.hasChairs();
    heli.hasMotor();
    heli.needsFuel();
    heli.fly();
    heli.land();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}