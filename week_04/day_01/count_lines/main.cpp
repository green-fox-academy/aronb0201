#include <iostream>
#include <fstream>
#include <string>


int lineNumb = 0;
std::string text;

void lines(int lineNumb);

int main() {


    lines(lineNumb);
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    return 0;
}


void lines(int lineNumb) {

    std::ifstream myFile("../my-file.txt");
    if (myFile.is_open()) {
        while (std::getline(myFile, text)) {
            ++lineNumb;

        }
        std::cout << lineNumb << std::endl;
    } else {
        std::cout << " zero" << std::endl;
    }


}