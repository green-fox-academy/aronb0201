//
// Created by Titkos on 20/11/2018.
//

#include <iostream>
#include "Mentor.h"

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : Person(name, age, gender) {
    _level = level;
}

Mentor::Mentor() : Person() {
    _level = Level::INTERMEDIATE;
}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << _name << " a " << _age << " year old " << getGender() << " " << getLevel() << " mentor."
              << std::endl;
}

std::string Mentor::getLevel() {
    if (_level == Level::INTERMEDIATE) {
        return "intermediate";
    } else if (_level == Level::SENIOR) {
        return "senior";
    } else {
        return "junior";
    }
}
