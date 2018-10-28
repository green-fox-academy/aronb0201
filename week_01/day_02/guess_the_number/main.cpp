#include <iostream>

int main() {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8


    int storedNumber = 6;
    int guessedNumber ;

    std::cout << "give me a number" << std::endl;
    std::cin >> guessedNumber;

    if ( guessedNumber == storedNumber) {
        std::cout << " you found the number " << storedNumber << std::endl;
    }
    else if ( guessedNumber > storedNumber) {
        std::cout << " the stored number is lower" << std::endl;
    }
    else if ( guessedNumber < storedNumber) {
        std::cout << " the stored number is higher " << std::endl;
    }



    return 0;
}