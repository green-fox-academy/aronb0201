//
// Created by Titkos on 27/11/2018.
//

#include <iostream>
#include "BassGuitar.h"

BassGuitar::BassGuitar() :  StringedInstrument() {
    _numberOfStrings = 4;

}

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings){
    _numberOfStrings = numberOfStrings;
}

void BassGuitar::sound() {

}

void BassGuitar::play() {
    std::cout << _numberOfStrings << " " << "dum-dumm-dumm" << std::endl;
}
