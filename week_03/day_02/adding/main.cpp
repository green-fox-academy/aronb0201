#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    auto *firstPointer = &a;
    auto *secondPointer = &b;

   auto addition = (*firstPointer + *secondPointer); // új változót hozok létre, ami tartalmazza a 2 pointer összegét. változó és nem pointer

    std::cout << addition << std::endl;

    std::cout << *firstPointer + *secondPointer << std::endl; // két pointert derferálva összeadva megkapom az értéket is



    return 0;
}