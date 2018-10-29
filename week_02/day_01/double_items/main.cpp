#include <iostream>

int main() {
    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    int numList [5] {3, 4, 5, 6, 7};

    for (int i=0; i<5; ++i){
        std::cout << numList [i] *2 <<std::endl;


    }

    return 0;
}