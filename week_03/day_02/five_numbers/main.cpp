#include <iostream>
#include <vector>
int inputArray();
int input;



int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again


   /* int input1;
    int input2;
    int input3;
    int input4;
    int input5;



   std::cout << "first number" << std::endl;
    std::cin >> input1;

    std::cout << "second number" << std::endl;
    std::cin >> input2;

    std::cout << "third number " << std::endl;
    std::cin >> input3;

    std::cout << "fourth number " << std::endl;
    std::cin >> input4;

    std::cout << "fifth number " << std::endl;
    std::cin >> input5;





     int inputArray[5] = {input1, input2, input3, input4, input5};
    auto *arrayPointer = inputArray;

    for ( int i = 0; i<(sizeof(inputArray)/sizeof(inputArray[0])); ++i) {

        std::cout << arrayPointer[i] << std::endl;

    }
    */

  int inputArray(int);

    return 0;
}

void printAll(int* array, int length)
{
    for(int i = 0; i < length; ++i)
    {
        std::cout << "szia " << *(array + i) << std::endl;
    }
}