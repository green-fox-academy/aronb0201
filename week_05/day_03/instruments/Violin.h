//
// Created by Titkos on 27/11/2018.
//

#ifndef INC_01_VIOLIN_H
#define INC_01_VIOLIN_H


#include "StringedInstrument.h"

class Violin : public StringedInstrument {

public:
    Violin();

    Violin(int _numberOfStrings);

    void sound() override;

    void play() override;

};


#endif //INC_01_VIOLIN_H
