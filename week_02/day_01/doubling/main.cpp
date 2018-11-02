#include <iostream>
#include <string>

void doubling(int baseNum);
int baseNum;

int main(int argc, char* args[]) {

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`





    std::cout << "number?" << std::endl;
    std::cin >> baseNum;

    doubling(baseNum);


    return 0;
}

void doubling(int baseNum) {

    std::cout << baseNum *2 << std::endl;


};