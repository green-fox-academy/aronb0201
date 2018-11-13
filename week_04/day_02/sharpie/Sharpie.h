//
// Created by Titkos on 13/11/2018.
//

#include <string>

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H


class Sharpie {
public:
    Sharpie(); // 0parameteres sharpiera vonatkozik
    Sharpie(std::string color, float width); // 2 paraméteresre, mivel a feladatban 2 paraméterest kell dekralálni

    void setColor(std::string color);

    void setWidth(float width);

    void use();

    float getUsage();


private:
    std::string _color;
    float _width;
    float _inkAmount;


};


#endif //SHARPIE_SHARPIE_H
