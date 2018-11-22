//
// Created by Titkos on 21/11/2018.
//

#ifndef FLYABLE_FLYABLE_H
#define FLYABLE_FLYABLE_H


class Flyable {
public:
    Flyable();

    virtual void land() = 0;

    virtual void fly() = 0;

    virtual void takeOff() = 0;


};


#endif //FLYABLE_FLYABLE_H
