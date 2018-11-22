//
// Created by Titkos on 21/11/2018.
//

#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H


#include "Instrument.h"

class StringedInstrument : public Instrument {

public:

    StringedInstrument();

    virtual void sound() = 0;

    StringedInstrument(int _numberOfStrings);

private:
    void play() override;

protected:
    int _numberOfStrings ;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
