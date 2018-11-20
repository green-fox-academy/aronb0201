//
// Created by Titkos on 20/11/2018.
//

#ifndef GREEN_FOX_COHORT_H
#define GREEN_FOX_COHORT_H


#include <vector>
#include "Student.h"

#include "Mentor.h"

class Cohort {
public:
    Cohort(std::string name);


    void addStudent(Student *student);

    void addMentor(Mentor *mentor);

    void info();

private:
    std::string _name;
    std::vector<Student *> _students;
    std::vector<Mentor *> _mentors;


};


#endif //GREEN_FOX_COHORT_H
