//
// Created by Titkos on 27/11/2018.
//

#ifndef INC_01_INSTRUMENT_H
#define INC_01_INSTRUMENT_H



class Instrument {

public:
    Instrument();
    Instrument(int numberOfStrings);


    virtual void play() =0;

protected:


};


#endif //INC_01_INSTRUMENT_H
