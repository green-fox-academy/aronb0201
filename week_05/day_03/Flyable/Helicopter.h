//
// Created by Titkos on 21/11/2018.
//

#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include "Flyable.h"
#include "Vehicle.h"

class Helicopter : public Vehicle, public Flyable {
public:

    Helicopter();

    void land() override;

    void fly() override;

    void takeOff() override;

};


#endif //FLYABLE_HELICOPTER_H
