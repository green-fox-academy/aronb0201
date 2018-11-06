#include <iostream>

int inputNumber;
int inputArray[inputNumber];
int inputNumber2;
int theArray ( int &inputNumber);
int arrayLength = sizeof(inputArray) / sizeof(inputArray[0]);


int main()
{
    std::cout << "number" << std::endl;
    std::cin >> inputNumber;



   int arrayItself = theArray(&inputNumber);
   std::cout << arrayItself << std::endl;

    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it


    return 0;
}

int theArray (int &inputNumber){
    for ( int i = 0; i < arrayLength; ++i){
        std::cin >> inputNumber2;
        int inputArray[inputNumber2];
        return inputArray[inputNumber2];
    }



}