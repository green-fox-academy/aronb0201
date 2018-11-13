//
// Created by Titkos on 13/11/2018.
//

#ifndef POST_IT_POST_IT_H
#define POST_IT_POST_IT_H

#include <iostream>
#include <string>

class Post_It {
public:
    Post_It(std::string backgroundColor, std::string text, std::string textColor);


    void setBackgroundColor(std::string backgroundColor);

    std::string getBackgroundColor();

    void setText(std::string text);

    std::string getText();

    void setColor(std::string textColor);

    std::string getColor();

private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;


};


#endif //POST_IT_POST_IT_H
