#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    std::ofstream myFile;
    myFile.open("../my-file.txt");
    if (myFile.is_open()) {
        std::string write = "Aron Baracs";
        myFile << write;
        myFile.close();
    } else {
        std::cout << "off" << std::endl;
    }

    return 0;
}