#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array




    int inputArray[5];
    auto *arrayPointer = inputArray;
    int arraySize = sizeof(inputArray) / sizeof(inputArray[0]); // array méret definiálása, hogy INTként tudjam kezelni
    for ( int x = 0; x<arraySize; ++x) { //array sizenyi alkalommal inputot kér
        std::cout << "numb?" << std::endl;
        std::cin >> inputArray[x];

    }

    for ( int i = 0; i<arraySize; ++i){

        std::cout << arrayPointer[i] << std::endl;
    }


    return 0;
}