//
// Created by Titkos on 13/11/2018.
//

#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H


class Animal {

public:
    Animal();

    Animal(int hunger, int thirst);

    void eat(int hunger);

    void drink(int thirst);

    void play(int hunger, int thirst);

    int getHunger();

    int getThirst();

    int getBoth();


private:
    int _hunger;
    int _thirst;


};


#endif //ANIMALS_ANIMAL_H
