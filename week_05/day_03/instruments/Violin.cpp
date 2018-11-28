//
// Created by Titkos on 27/11/2018.
//

#include <iostream>
#include "Violin.h"

Violin::Violin() : StringedInstrument() {
    _numberOfStrings = 4;

}

Violin::Violin(int numberOfStrings) : StringedInstrument(numberOfStrings) {
_numberOfStrings = numberOfStrings;
}

void Violin::sound() {

}

void Violin::play() {
    std::cout << _numberOfStrings << " " << "screech" << std::endl;
}
