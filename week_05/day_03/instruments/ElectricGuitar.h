//
// Created by Titkos on 27/11/2018.
//

#ifndef INC_01_ELECTRICGUITAR_H
#define INC_01_ELECTRICGUITAR_H


#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument{
public:

    ElectricGuitar();

    ElectricGuitar(int numberOfStrings);

    void sound() override;

    void play() override;

protected:
    int _numberOfstrings;

};


#endif //INC_01_ELECTRICGUITAR_H
