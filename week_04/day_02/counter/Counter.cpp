//
// Created by Titkos on 13/11/2018.
//



#include "Counter.h"


Counter::Counter() {
    int _FieldValue = 0;

}

Counter::Counter(int fieldValue) {

    _FieldValue = fieldValue;

}

int Counter::add() {
    _FieldValue += +1;
    return _FieldValue;

}

int Counter::add(int number) {
    _FieldValue += number + 1;
    return _FieldValue;

}

int Counter::get() {
    return _FieldValue;
}

int Counter::reset() {
    _FieldValue -= _FieldValue;
    return _FieldValue;

}



