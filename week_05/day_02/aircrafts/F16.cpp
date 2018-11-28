//
// Created by Titkos on 26/11/2018.
//

#include "F16.h"
#include "Aircrafts.h"

F16::F16() : Aircrafts()  {

    _maxAmmo = 8;
    _baseDamage = 30;
    _baseAmmo = 0;
    _type = Type::F16;
    isPriority();
}

int F16::isPriority() {

    return _priorityNumber = 2;

}


