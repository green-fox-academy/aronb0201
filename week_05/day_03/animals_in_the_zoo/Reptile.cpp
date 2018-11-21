//
// Created by Titkos on 21/11/2018.
//

#include "Reptile.h"

Reptile::Reptile() :Animal(){

}

Reptile::Reptile(std::string name) : Animal(name) {
 _name = name;
}

std::string Reptile::getName() {
    return _name;
}

std::string Reptile::breed() {
    _breedType = breedType;
    return breedType;
}
