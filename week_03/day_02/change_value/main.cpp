#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    auto *tempPointer = &temperature;
    *tempPointer = 26.7;
    std::cout << *tempPointer <<std::endl;


    return 0;
}