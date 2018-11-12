
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

#include <iostream>
#include <string>
#include <exception>

int main() {
    int numb;
    std::cout << "numb?" << std::endl;
    std::cin >> numb;

    try {

        if (numb % 10 != 0) {
            throw std::string("Can't divide by 0");
        }
        std::cout << numb % 10 << std::endl;
    } catch (std::string &e) {
        std::cout << e << std::endl;
    }
    return 0;
}
