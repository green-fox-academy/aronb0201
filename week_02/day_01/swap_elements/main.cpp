#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`


    std::string abc[3] = {"first" , "second ", "third "};

    std::string first = abc[0] ;
    std::string third = abc[2];

    std::string abc2[3] = {third, "second", first};

    for ( int i = 0; i < sizeof(abc2); ++i) {

        std::cout << abc2[i] <<std::endl;

    }










    return 0;
}