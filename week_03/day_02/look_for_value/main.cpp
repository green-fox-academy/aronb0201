#include <iostream>
#include <vector>
#include <algorithm>

int array[3];
int arrayLength = sizeof(array) / sizeof(array[0]);
int *arrayPointer = &array[3];
int printIndex ( int *array, int arrayLength);


int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0



    for ( int i = 0; i< arrayLength; ++i) {

        std::cout << "number?" << std::endl;
        std::cin >> array[i];

        /*if ( array[0] == 3) {
            std::cout << i << std::endl;

        }
        else if ( array[1] == 3){

            std::cout << i << std::endl;

        }
        else if ( array [2] == 3 ){

            std::cout << i << std::endl;
        }*/

        }
        int resoult = printIndex(array, arrayLength ); // int resoult ami a printIndex funkció végerdménye. ahoz hogy kiíírjam változóvá kell tennem.
        std::cout << resoult << std::endl;



}

int printIndex (int  *array,int arrayLength){

    for ( int x = 0; x < arrayLength; ++x){
        if ( array[x] == 3 ){
            return  x;
        }

    }
    return 0;  // for cikluson kívülre írom a returnt, hogy a for ciklus lefut és utána térjen vissza 0 val ha  for cikluson belül nem talált semmit

}






