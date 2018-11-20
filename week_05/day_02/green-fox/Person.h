//
// Created by Titkos on 20/11/2018.
//

#ifndef GREEN_FOX_PERSON_H
#define GREEN_FOX_PERSON_H


#include <string>

enum class Gender {
    MALE,
    FEMALE
};

class Person {
public:
    Person(std::string name, int age, Gender gender);

    Person();

    std::string female = "female";
    std::string male = "male";

    virtual void introduce();

    void getGoal();

    std::string getGender();

protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //GREEN_FOX_PERSON_H
