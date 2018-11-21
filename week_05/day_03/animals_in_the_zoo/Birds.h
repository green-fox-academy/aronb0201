//
// Created by Titkos on 21/11/2018.
//

#ifndef ANIMALS_IN_THE_ZOO_BIRDS_H
#define ANIMALS_IN_THE_ZOO_BIRDS_H


#include "Animal.h"

class Birds : public Animal {
public:
    Birds();

    Birds(std::string name);

    std::string getName() override;

    std::string breed() override;

protected:
    std::string breedType = "eggs";
};


#endif //ANIMALS_IN_THE_ZOO_BIRDS_H
