#include <iostream>

int main() {

    int number;
    std::string star;

    std::cout << "give me a number " << std::endl;
    std::cin >> number;

    for ( int i = 0; i < (number); ++i ){

        star += "*";
        std::cout << star << std::endl;

    }



    return 0;
}