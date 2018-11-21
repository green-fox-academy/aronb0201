//
// Created by Titkos on 21/11/2018.
//

#ifndef INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_INSTRUMENT_H


#include <string>

class Instrument {
public:
    Instrument();

    Instrument(std::string name);

    virtual void play() = 0;

protected:
    std::string _name;
};


#endif //INSTRUMENTS_INSTRUMENT_H
