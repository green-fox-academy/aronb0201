//
// Created by Titkos on 20/11/2018.
//

#ifndef GREEN_FOX_MENTOR_H
#define GREEN_FOX_MENTOR_H


#include "Person.h"
enum class Level
{
    JUNIOR,
    INTERMEDIATE,
    SENIOR,
};

class Mentor : public Person{
public:
    Mentor(std::string name, int age,Gender gender , Level level);
    Mentor();

    void getGoal();
    void introduce();
    std::string getLevel();
    std::string intermediate = "intermediate";
    std::string senior = "senior";
    std::string junior = "junior";

private:
    Level _level;

};


#endif //GREEN_FOX_MENTOR_H
