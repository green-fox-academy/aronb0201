#include <iostream>

int main() {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have


    int chicken;
    int pigs;

    std::cout << "How many chicken has the farmer? " << std::endl;
    std::cin >> chicken;

    std::cout << "How many pigs he has?" << std::endl;
    std::cin >> pigs;

    std::cout << " He has " << pigs << " pigs and " << chicken << " chicken . They have " << ( pigs * 4 ) + ( chicken * 2 ) << " legs. " << std::endl;


    return 0;
}