#include <iostream>

int main() {

    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end


    std::string animals[3] {"koal", "pand", "zebr"};
        for(int i=0; i<3; ++i){

            std::cout << animals[i] + "a" << std::endl;
        }



    std::cout << "Hello, World!" << std::endl;
    return 0;
}