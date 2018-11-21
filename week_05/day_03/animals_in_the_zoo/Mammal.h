//
// Created by Titkos on 21/11/2018.
//

#ifndef ANIMALS_IN_THE_ZOO_MAMMAL_H
#define ANIMALS_IN_THE_ZOO_MAMMAL_H


#include "Animal.h"

class Mammal : public Animal {
public:
    Mammal();
    Mammal(std::string name);
     std::string getName() override;

    std::string breed() override;

protected:
    std::string breedType = "live";



protected:
    std::string name;
};


#endif //ANIMALS_IN_THE_ZOO_MAMMAL_H
