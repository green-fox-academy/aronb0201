//
// Created by Titkos on 26/11/2018.
//

#include <iostream>
#include "Aircrafts.h"


void Aircrafts::getAmmo() {
    std::cout << _maxAmmo << std::endl;

}

Aircrafts::Aircrafts() {

}

Aircrafts::Aircrafts(int maxAmmo, int baseDamage, int baseAmmo, Type type, int priorityNumber) {
    _maxAmmo = maxAmmo;
    _baseDamage = baseDamage;
    _baseAmmo = baseAmmo;
    _type = type;
    _priorityNumber = priorityNumber;

}

int Aircrafts::fight() {
    int damage = _baseDamage * _baseAmmo;
    for (int i = 0; i < _baseAmmo; ++i) {
        _baseAmmo--;
    }
    return damage;
}

int Aircrafts::refill() {
    if (_baseAmmo != _maxAmmo) {
        while (_baseAmmo != _maxAmmo) {
            _baseAmmo++;
            std::cout << _baseAmmo << std::endl;
        }
    } else {
        std::cout << "aircraft is full with ammo " << std::endl;
    }
    return _baseAmmo;
}

std::string Aircrafts::getType() {
    if (_type == Type::F35) {
        return "F35";
    } else {
        return "F16";
    };
}

void Aircrafts::getStatus() {
    std::cout << " Type " << getType() << ", ammo " << _baseAmmo << ", base damage" << _baseDamage << " all damage "
              << _baseAmmo * _baseDamage << std::endl;

}

int Aircrafts::isPriority() {

}

int Aircrafts::getBaseAmmo() {
    return _baseAmmo;

}

int Aircrafts::getMaxAmmo() {
    return _maxAmmo;
}

int Aircrafts::getDamage() {
    int actualDamage = _baseDamage * _baseAmmo;
    return actualDamage;
}

int Aircrafts::getRefillAmount() {
    int refillAmount = _maxAmmo - _baseAmmo;
    return refillAmount;
}

void Aircrafts::setBaseAmmo(int baseAmmo) {
    _baseAmmo = baseAmmo;
}

