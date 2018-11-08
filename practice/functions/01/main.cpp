#include <iostream>
#include <string>
int a = 15;
int b = 23;


void swap (int a, int b);

int main(int argc, char* args[]) {
    // Create two integer variables: a=15, b=23
    // Create a function named swap that gets the 2 integers as parameters and swaps its values.
    // Print the values before and after the function call and make sure the values are printed in reversed order.



    std::cout << a << "  " << b << std::endl;
    swap(a,b);



    return 0;
}

void swap (int a, int b) {
    int a2 = b;
    int b2= a;



    std::cout << a2 << "  " << b2 << std::endl;


}