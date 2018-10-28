#include <iostream>

int main() {

    int number;

    std::cout << "give me a number" << std::endl;
    std::cin >> number;


    for ( int i = 1; i < 16 ; ++i){

        std::cout << i << " * " << number << " = " << number * i << std::endl;
    }

    return 0;
}