//
// Created by Titkos on 28/11/2018.
//

#include <iostream>
#include "Tree.h"

Tree::Tree() {

}

Tree::Tree(std::string name) : Plants(name) {

    _name = name;
    _waterNeed = 70;
    _waterLevel = 0;

}

void Tree::plantState() {
    if (getWaterLevel()<getWaterNeed()) {
        std::cout << " The tree colored " << getColor() << " needs water" << std::endl;
    }
    else if (getWaterLevel()>=getWaterNeed()){
        std::cout << " the tree colored " << getColor() << " dont need more water" << std::endl;
    }
}

std::string Tree::getColor() {
    return _name;
}

int Tree::getWaterNeed() {
    return _waterNeed;
}

int Tree::getWaterLevel() {
    return _waterLevel;
}

void Tree::irrigate(int water) {
    _waterLevel+=water;
}

bool Tree::needsToBeWateredFirst() {

        return false;

}


