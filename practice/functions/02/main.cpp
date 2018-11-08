#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void printValami(std::vector<std::string> valami);

int main(int argc, char* args[]) {

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...


   std::vector<std::string> valami = {"first","second","third", "fourth"};

    printValami(valami);

    return 0;
}

void printValami(std::vector<std::string> valami) {

    for (int i = 0; i < 4; ++i ){
        std::cout << valami[i]<< std::endl;

    }


}