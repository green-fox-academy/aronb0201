//
// Created by Titkos on 21/11/2018.
//

#include "Mammal.h"
#include "Animal.h"

Mammal::Mammal() : Animal(){

}

Mammal::Mammal(std::string name) : Animal(name) {
    _name = name;
}

std::string Mammal::getName() {
    return _name;
}

std::string Mammal::breed() {
    _breedType = breedType;
    return breedType;

}