#include <iostream>

int main() {

    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot

    int x;

    std::cout << "enter a number" << std::endl;

    std::cin >> x;

    if(x <= 0){
        std::cout << "not enough" << std::endl;
        return 0;
    }
    if (x == 1){
        std::cout << "one" << std::endl;
        return 0;
    }
    if (x == 2){
        std::cout << "two" << std::endl;
        return 0;
    }
    else{
        std::cout << "a lot" << std::endl;

    }


    return 0;
}