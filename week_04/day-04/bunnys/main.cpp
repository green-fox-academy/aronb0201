#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
int earsOfBunnys(int numberOfBunnys);

int main() {


    std::cout << earsOfBunnys(6) << std::endl;
    return 0;
}

int earsOfBunnys(int numberOfBunnys) {
    if (numberOfBunnys != 0) {
        return 2 + earsOfBunnys(numberOfBunnys - 1);
    }
}