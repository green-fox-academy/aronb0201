//
// Created by Titkos on 26/11/2018.
//

#ifndef AIRCRAFTS_CARRIER_H
#define AIRCRAFTS_CARRIER_H

#include <vector>
#include "Aircrafts.h"

class Carrier {

public:
    Carrier();
    Carrier(int ammoStoredInCarrier, int healthPoint);

    void addToStore(Aircrafts* aircrafts);
    void fill();
    int getCarrierAmmo();
    void getStatus();
    int storedAircraftsDamage();
    void storedAircraftsStatus();
    void fight(Carrier * carrier);
    int getHP();
    virtual int isPriority();
protected:
    std::vector<Aircrafts *> _aircrafts;
    int _ammoStoredInCarrier;
    int _healthPoint;
    int _priorityNumber;


};


#endif //AIRCRAFTS_CARRIER_H
