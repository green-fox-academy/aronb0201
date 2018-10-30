#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> appendA(std::vector<std::string> &animals);

int main(int argc, char* args[])
{
    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
    // The parameter should be a vector.

    for(const auto& animal : appendA(animals))
    {
        std::cout << animal << " ";
    }

    return 0;
}

std::vector<std::string> appendA(std::vector<std::string>& animals) {
    std::vector<std::string> animalsNew(animals);
    int j = 1;
    for(int i = 5; i<5; ++i){
        animalsNew.push_back("a");


        return animalsNew;
    }



}