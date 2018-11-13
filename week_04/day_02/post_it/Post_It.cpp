//
// Created by Titkos on 13/11/2018.
//
#include <string>
#include <iostream>
#include "Post_It.h"


Post_It::Post_It(std::string backgroundColor, std::string text, std::string textColour) {
    _backgroundColor = backgroundColor;
    _text = text;
    _textColor = textColour;


}

void Post_It::setBackgroundColor(std::string backgroundColor) {
    _backgroundColor = backgroundColor;
}

std::string Post_It::getBackgroundColor() {
    return _backgroundColor;

}

void Post_It::setText(std::string text) {

    _text = text;

}

std::string Post_It::getText() {
    return _text;
}

void Post_It::setColor(std::string textColor) {
    _textColor = textColor;
}

std::string Post_It::getColor() {
    return _textColor;
}