//
// Created by Titkos on 28/11/2018.
//

#include <iostream>
#include "Flower.h"

Flower::Flower() {

}

Flower::Flower(std::string name) : Plants(name) {
    _name = name;
    _waterNeed = 40;
    _waterLevel = 0;

}

void Flower::plantState() {
    if (getWaterLevel() < getWaterNeed()) {
        std::cout << " The flover colored " << getColor() << " needs water" << std::endl;
    } else if (getWaterLevel() >= getWaterNeed()) {
        std::cout << " the flower colored" << getColor() << " dont need more water" << std::endl;
    }
}

std::string Flower::getColor() {
    return _name;
}

int Flower::getWaterNeed() {
    return _waterNeed;
}

int Flower::getWaterLevel() {
    return _waterLevel;
}

void Flower::irrigate(int water) {
    _waterLevel += water;
}

bool Flower::needsToBeWateredFirst() {

    return true;
}
