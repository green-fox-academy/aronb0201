//
// Created by Titkos on 20/11/2018.
//

#ifndef GREEN_FOX_STUDENT_H
#define GREEN_FOX_STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student(std::string name, int age, Gender gender, std::string previousOrganization, int skippedDays = 0);

    Student();

    void introduce();

    void skipDays(int numberOfDays);

protected:
    std::string _previousOrganization;
    int _skippedDays;


};


#endif //GREEN_FOX_STUDENT_H
