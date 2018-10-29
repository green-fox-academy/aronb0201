#include <iostream>

void factoring();
int input;


int main() {
    std::cout << "give me a number" << std::endl;
    std::cin >> input;

    factoring();

    return 0;
}

void factoring(){

    for(int i = 1; i <= input; ++i)
    {
        if(input % i == 0)
           std::cout << i << std::endl;
    }
}