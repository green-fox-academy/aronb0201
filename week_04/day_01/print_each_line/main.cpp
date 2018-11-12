#include <iostream>
#include <exception>
#include <string>
#include <fstream>

int main() {
    std::ifstream myFile;

    myFile.open("../my-file.txt");
    if (myFile.is_open()) {
        std::cout << "siker" << std::endl;

    } else {
        std::cout << " nem" << std::endl;
    }
    std::string text;
    while (getline(myFile, text)) {
        std::cout << text << std::endl;
    }
    myFile.close();


    return 0;
}