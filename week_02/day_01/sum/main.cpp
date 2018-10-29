#include <iostream>




int userinput;
void sum();

int main() {

    for (int i= 0; i<3; ++i) {
        std::cout << "give me a number" << std::endl;
        std::cin >> userinput;
    }
    sum();

}

void sum() {

        std::cout << userinput * userinput << std::endl;
    }
