#include <iostream>

std::string number1;
std::string number2;
std::string number3;
std::string number4;



void printParams (std::string number1);
void printParams (std::string number1, std::string number2);
void printParams (std::string number1, std::string number2, std::string number3);
void printParams (std::string number1, std::string number2, std::string number3, std::string number4);



int main() {

    std::cout << "first parameter" << std::endl;
    std::cin >> number1;

    std::cout << " second parameter" << std::endl;
    std::cin >> number2;

    std::cout << " third parameter" << std::endl;
    std::cin >> number3;

    std::cout << " fourth parameter " << std::endl;
    std::cin >> number4;

    printParams (number1);
    printParams (number1, number2);
    printParams (number1, number2, number3);
    printParams (number1, number2, number3, number4);





}

void printParams (std::string number1) {
std::cout << number1 << std::endl;

}

void printParams (std::string number1,std::string number2){

    std::cout << number1 << number2 << std::endl;
}

void printParams (std::string number1, std::string number2, std::string number3) {

    std::cout << number1 << number2 << number3 << std::endl;

}

void printParams (std::string number1, std::string number2, std::string number3, std::string number4) {
    std::cout << number1 << number2 << number3 << number4 << std::endl;
}