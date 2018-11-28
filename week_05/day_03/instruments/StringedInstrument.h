//
// Created by Titkos on 27/11/2018.
//

#ifndef INC_01_STRINGEDINSTRUMENT_H
#define INC_01_STRINGEDINSTRUMENT_H


#include "Instrument.h"

class StringedInstrument : public Instrument {
public:
    StringedInstrument();

    StringedInstrument(int _numberOfStrings);


    virtual void sound()=0;

    virtual void  play() override;


protected:
    int _numberOfStrings;

};


#endif //INC_01_STRINGEDINSTRUMENT_H
