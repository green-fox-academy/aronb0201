//
// Created by Titkos on 13/11/2018.
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


#include <string>

class Counter {

public:
    Counter();

    Counter(int fieldValue);


    int add(int number);

    int add();

    int get();

    int reset();


private:
    int _FieldValue;
    int _number;
    std::string _name;
    int _expected;
    int _actual;


};


#endif //COUNTER_COUNTER_H
