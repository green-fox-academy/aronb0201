#include <iostream>
#include "Post_It.h"


int main() {

    Post_It postIt1("Orange", "Idea 1", "Pink");
    Post_It postIt2("pink", "awesome", "black");
    Post_It postIt3("Yellow", "superb", "green");

    std::cout << postIt1.getText() << std::endl;
    std::cout << postIt3.getText() << std::endl;
    std::cout << postIt2.getText() << std::endl;


    return 0;
}