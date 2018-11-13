#include <iostream>
#include "Sharpie.h"

int main() {

    Sharpie sharpie1("black", 2.1f);
    Sharpie sharpie2;

    sharpie1.use();
    sharpie2.use();

    std::cout << sharpie1.getUsage() << std::endl;
    std::cout << sharpie2.getUsage() << std::endl;


    return 0;
}