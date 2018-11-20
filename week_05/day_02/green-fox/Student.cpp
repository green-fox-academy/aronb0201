//
// Created by Titkos on 20/11/2018.
//

#include <iostream>
#include "Student.h"

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization, int skippedDays) : Person(
        name, age, gender) {
    previousOrganization = _previousOrganization;
    _skippedDays = skippedDays;

}

Student::Student() : Person() {
    _previousOrganization = " The School of Life";
    _skippedDays = 0;
}


void Student::introduce() {
    std::cout << "Hi, I'm " << _name << " a " << _age << " year old " << getGender() << " from "
              << _previousOrganization << " who skipped " << _skippedDays << " days from the course already"
              << std::endl;
}

void Student::skipDays(int numberOfDays) {
    _skippedDays = +numberOfDays;
}
