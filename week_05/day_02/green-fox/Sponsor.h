//
// Created by Titkos on 20/11/2018.
//

#ifndef GREEN_FOX_SPONSOR_H
#define GREEN_FOX_SPONSOR_H


#include "Person.h"

class Sponsor : public Person {
public:
    Sponsor(std::string name, int age, Gender gender, std::string company);

    Sponsor();

    void introduce();

    int hire();

    void getGoal();

private:
    std::string _company;
    int _hiredStudents;


};


#endif //GREEN_FOX_SPONSOR_H
