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
    Aircrafts(int maxAmmo, int baseDamage, int baseAmmo, Type type, int priorityNumber);
    void getAmmo();
    int fight();
    int refill();
    std::string getType();
    void getStatus();
    virtual int isPriority()=0 ;
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
    int _priorityNumber;

};


#endif //AIRCRAFTS_AIRCRAFTS_H
