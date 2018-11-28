//
// Created by Titkos on 28/11/2018.
//

#include <iostream>
#include "Plants.h"


Plants::Plants() {
    std::vector<Plants *> _plants;
}

Plants::Plants(std::string name) {
    _name = name;
}

void Plants::plantState() {

}

std::string Plants::getColor() {
    return _name;
}

int Plants::getWaterNeed() {
    return _waterNeed;
}

int Plants::getWaterLevel() {
    return _waterLevel;
}

void Plants::irrigate(int water) {

    for (int i = 0; i < _plants.size(); ++i) {
        if (_plants[i]->needsToBeWateredFirst() == true) {
            _plants[i]->setWaterLevel(water);
            _plants[i]->plantState();
        } else if (_plants[i]->needsToBeWateredFirst() == false) {
            _plants[i]->setWaterLevel(water);
            _plants[i]->plantState();
        }
    }
}

bool Plants::needsToBeWateredFirst() {

}

void Plants::setWaterLevel(int water) {
    _waterLevel = water;
}

void Plants::addToGarden(Plants *plants) {
    _plants.push_back(plants);
}




