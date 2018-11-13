//
// Created by Titkos on 13/11/2018.
//

#include "Animal.h"

Animal::Animal() {
    _hunger = 50;
    _thirst = 50;

}


void Animal::eat(int hunger) {
    _hunger = hunger - 1;

}

void Animal::drink(int thirst) {
    _thirst = thirst - 1;

}

void Animal::play(int hunger, int thirst) {
    _thirst = thirst + 1;
    _hunger = hunger + 1;
}

int Animal::getHunger() {
    return _hunger;

}

int Animal::getThirst() {
    return _thirst;
}

int Animal::getBoth() {
    return _thirst;
    return _hunger;
}