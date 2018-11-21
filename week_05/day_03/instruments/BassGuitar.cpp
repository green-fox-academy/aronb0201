//
// Created by Titkos on 21/11/2018.
//

#include <iostream>
#include "BassGuitar.h"
#include "StringedInstrument.h"
#include "Instrument.h"

BassGuitar::BassGuitar() : StringedInstrument(_numberOfStrings) {
    _numberOfStrings = 4;
}

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument(_numberOfStrings) {
    _numberOfStrings = numberOfStrings;
}

void BassGuitar::play() {
    std::cout << _numberOfStrings << " " << "Duum-duum-duum" << std::endl;
}

void BassGuitar::sound() {

}
