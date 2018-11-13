//
// Created by Titkos on 13/11/2018.
//

#include "Sharpie.h"

Sharpie::Sharpie() {
    _inkAmount = 100;
}

Sharpie::Sharpie(std::string color, float width) {

    _color = color;
    _width = width;
    _inkAmount = 100;

}

void Sharpie::setColor(std::string color) {

    _color = color;
}

void Sharpie::setWidth(float width) {

    _width = width;

}


void Sharpie::use() {

    _inkAmount = _inkAmount - 4.3f;
}

float Sharpie::getUsage() {//nemkell neki megadni paraméterként mert el van tárolva alapból a classban

    return _inkAmount;
}