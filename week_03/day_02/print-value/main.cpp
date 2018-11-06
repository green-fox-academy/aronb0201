#include <iostream>

int main ()
{
    // Print out the value of the variable called 'age' using a pointer
    // (you have to create the pointer first)

    int age = 31;
    int *agePointer = &age; //age pointerhez referencia alapján behívtam, azaz nem hoztam létre a "másolatot"




    std::cout << *agePointer << std::endl; //mivel *-val hívtam be apointert, így derefeltem, azaz az age értéket fogja kiadni. * nélkül a memóriacímet.


    return 0;
}