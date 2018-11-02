#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end


    std::string animals[3] = { "koal", "pand", "zebr"};

    for (int i = 0; i < sizeof(animals); ++i){

        animals[i].push_back('a');
        std::cout << animals[i] << std::endl;
    }


}