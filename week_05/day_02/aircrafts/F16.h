//
// Created by Titkos on 26/11/2018.
//

#ifndef AIRCRAFTS_F16_H
#define AIRCRAFTS_F16_H


#include "Aircrafts.h"

class F16 : public Aircrafts {

public:
    F16();
    F16(int maxAmmo, int baseDamage,int baseAmmo);



protected:
Type _type;

};


#endif //AIRCRAFTS_F16_H
