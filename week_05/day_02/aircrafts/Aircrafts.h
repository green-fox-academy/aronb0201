//
// Created by Titkos on 26/11/2018.
//

#ifndef AIRCRAFTS_AIRCRAFTS_H
#define AIRCRAFTS_AIRCRAFTS_H

#include "iostream"



enum class Type{
    F35,
    F16
};

class Aircrafts {

public:
    Aircrafts();
    Aircrafts(int maxAmmo, int baseDamage, int baseAmmo, Type type);
    void getAmmo();
    int fight();
    int refill();
    std::string getType();
    void getStatus();
    bool isPriority();
    int getBaseAmmo();
    int getMaxAmmo();
    int getDamage();
    int getRefillAmount();

    void setBaseAmmo(int baseAmmo);


protected:
    int _maxAmmo;
    int _baseDamage;
    int _baseAmmo;
    Type _type;

};


#endif //AIRCRAFTS_AIRCRAFTS_H
