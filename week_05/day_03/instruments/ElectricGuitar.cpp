//
// Created by Titkos on 27/11/2018.
//

#include <iostream>
#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar() : StringedInstrument(){
_numberOfStrings = 6;
}

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings){
_numberOfStrings = numberOfStrings;
}

void ElectricGuitar::sound() {

}

void ElectricGuitar::play() {
    std::cout << _numberOfStrings << " " << "twang" << std::endl;
}
