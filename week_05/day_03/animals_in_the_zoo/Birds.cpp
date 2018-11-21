//
// Created by Titkos on 21/11/2018.
//

#include "Birds.h"

Birds::Birds() : Animal() {

}

Birds::Birds(std::string name) : Animal(name) {
    _name = name;
}

std::string Birds::getName() {
    return _name;
}

std::string Birds::breed() {
    _breedType = breedType;
    return breedType;
}