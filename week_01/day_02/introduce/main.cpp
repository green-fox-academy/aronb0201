#include <iostream>

int main() {
    std::string name;
    std::string age;
    std::string heightmeter;

    std::cout << "whats your name? " << std::endl;
    std::cin >> name;
    std::cout << name << std::endl;
    std::cout << "how old are you?" << std::endl;
    std::cin >> age;
    std::cout << age;
    std::cout << "how tall are you?" << std::endl;
    std::cin >> heightmeter;

    return 0;
}