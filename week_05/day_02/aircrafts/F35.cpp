//
// Created by Titkos on 26/11/2018.
//

#include "F35.h"

F35::F35() {
    _maxAmmo =12;
    _baseDamage = 50;
    _baseAmmo = 0;
    _type= Type::F35;
    isPriority();
}

int F35::isPriority() {
    int priorityNumber = 1;
    return priorityNumber;

}


