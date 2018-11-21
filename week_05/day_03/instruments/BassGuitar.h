//
// Created by Titkos on 21/11/2018.
//

#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H


#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument {

public:
    BassGuitar();

    void play() override;

    BassGuitar(int numberOfStrings);


    void sound() override;
};


#endif //INSTRUMENTS_BASSGUITAR_H
