//
// Created by Titkos on 27/11/2018.
//

#ifndef INC_01_BASSGUITAR_H
#define INC_01_BASSGUITAR_H


#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument {
public:
    BassGuitar();

    BassGuitar(int numberOfStrings);

    void sound() override;

    void play() override;

};


#endif //INC_01_BASSGUITAR_H
