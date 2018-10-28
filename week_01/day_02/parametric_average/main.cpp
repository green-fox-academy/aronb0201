#include <iostream>

int main() {

     // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4


    int firstNumber;
    int askedNumber;

    std::cout << "give me a number " << std::endl;
    std::cin >> firstNumber;


    for ( int i = 0; i < (firstNumber ); ++i)  {
        std::cout << "enter an integer" << std::endl;
        std::cin >> askedNumber ;
        if ( askedNumber == ( firstNumber + 1)) {
            std::cout << askedNumber++ << std::endl;
        }
    }



    std::cout << "Hello, World!" << std::endl;
    return 0;
}