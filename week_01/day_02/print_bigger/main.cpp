#include <iostream>

int main() {

    int firstNumber;
    int secondNumber;

    std::cout << "please write the first number" << std::endl;

    std::cin >> firstNumber;

    std::cout << "please give me the second number" << std::endl;

    std::cin >> secondNumber;

    if (firstNumber > secondNumber){
        std::cout << firstNumber << std::endl;
    }
    else{
        std::cout << secondNumber << std::endl;
    }


    return 0;
}