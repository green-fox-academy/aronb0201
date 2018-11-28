//
// Created by Titkos on 26/11/2018.
//

#include "Carrier.h"
#include "Aircrafts.h"


Carrier::Carrier() {
    std::vector<Aircrafts *> _aircrafts;
    _healthPoint = 5000;
    _ammoStoredInCarrier = 300;

}

void Carrier::addToStore(Aircrafts *aircrafts) {
    _aircrafts.push_back(aircrafts);

}

void Carrier::fill() {
    if (_ammoStoredInCarrier != 0) {
        for (int i = 0; i < _aircrafts.size(); ++i) {
            if (_aircrafts[i]->isPriority() == 1) {
                if (_ammoStoredInCarrier > _aircrafts[i]->getMaxAmmo()) {
                    _ammoStoredInCarrier -= _aircrafts[i]->getMaxAmmo() - _aircrafts[i]->getBaseAmmo();
                    _aircrafts[i]->setBaseAmmo(_aircrafts[i]->getMaxAmmo());
                    _priorityNumber++;

                } else {
                    std::cout << "dont have ammo" << std::endl;
                }

            } else if (_aircrafts[i]->isPriority() == 2) {
                if (_ammoStoredInCarrier > _aircrafts[i]->getMaxAmmo()) {
                    _ammoStoredInCarrier -= _aircrafts[i]->getMaxAmmo() - _aircrafts[i]->getBaseAmmo();
                    _aircrafts[i]->setBaseAmmo(_aircrafts[i]->getMaxAmmo());
                } else {
                    std::cout << "dont have ammo" << std::endl;
                }
            }


        }

        std::cout << _ammoStoredInCarrier << std::endl;

    } else {
        std::cout << "no ammo in the carrier" << std::endl;
    }


}

Carrier::Carrier(int ammoStoredInCarrier, int healthPoint) {
    _ammoStoredInCarrier = ammoStoredInCarrier;
    _healthPoint = healthPoint;
    std::vector<Aircrafts *> _aircrafts;

}

int Carrier::getCarrierAmmo() {
    return _ammoStoredInCarrier;
}

void Carrier::getStatus() {
    std::cout << " HP: " << getHP() << ", Aircrafts: " << _aircrafts.size() << ", ammo storage: "
              << _ammoStoredInCarrier << ", total damage" << storedAircraftsDamage() << std::endl;
    std::cout << "Aircrafts" << std::endl;
    for (int i = 0; i < _aircrafts.size(); ++i) {
        storedAircraftsStatus();
    }

}

int Carrier::storedAircraftsDamage() {
    int storedDamage;
    for (int i = 0; i < _aircrafts.size(); ++i) {
        storedDamage = _aircrafts[i]->getDamage();
    }
    return storedDamage;
}

void Carrier::storedAircraftsStatus() {
    for (int i = 0; i < _aircrafts.size(); ++i) {
        _aircrafts[i]->getStatus();

    }
}

void Carrier::fight(Carrier *carrier) {
    _healthPoint -= carrier->storedAircraftsDamage();
    carrier->_healthPoint -= storedAircraftsDamage();
    for (int i = 0; i < _aircrafts.size(); ++i) {
        _aircrafts[i]->setBaseAmmo(0);

    }
}

int Carrier::getHP() {
    return _healthPoint;
}

int Carrier::isPriority() {
    int priorityNumber;
    return priorityNumber;
}



