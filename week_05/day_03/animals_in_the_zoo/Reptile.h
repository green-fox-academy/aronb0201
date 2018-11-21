//
// Created by Titkos on 21/11/2018.
//

#ifndef ANIMALS_IN_THE_ZOO_REPTILE_H
#define ANIMALS_IN_THE_ZOO_REPTILE_H


#include "Animal.h"

class Reptile : public Animal {
public:
    Reptile();

    Reptile(std::string name);

    std::string getName() override;

    std::string breed() override;

protected:
    std::string name;
    std::string breedType = " eggs";
};


#endif //ANIMALS_IN_THE_ZOO_REPTILE_H
