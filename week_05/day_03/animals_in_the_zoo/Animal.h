//
// Created by Titkos on 21/11/2018.
//

#ifndef ANIMALS_IN_THE_ZOO_ANIMAL_H
#define ANIMALS_IN_THE_ZOO_ANIMAL_H


#include <string>

class Animal {
public:
    Animal();

    Animal(std::string _name);

    virtual std::string getName() = 0;

    virtual std::string breed() = 0;

protected:
    std::string _name;
    std::string _breedType;
    int _age;


};


#endif //ANIMALS_IN_THE_ZOO_ANIMAL_H
