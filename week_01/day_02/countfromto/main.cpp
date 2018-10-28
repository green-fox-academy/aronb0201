#include <iostream>

int main() {

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5


    int firstNumb;
    int secondNumb;

    std::cout << "first number? " << std::endl;
    std::cin >> firstNumb;

    std::cout << " second number? " << std::endl;
    std::cin >> secondNumb;

    if ( firstNumb > secondNumb) {
        std::cout << " second number should be bigger " << std::endl;

    }
    else if (firstNumb < secondNumb) {
        std::cout << " your fist number " << firstNumb << " your second number is " << secondNumb  << std::endl;
        for ( int i = firstNumb; i < (secondNumb + 1); ++i) {

            std::cout << i << std::endl;
        }
    }






    return 0;
}