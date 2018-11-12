#include <iostream>
#include <fstream>
#include <string>


std::string word;
int number;

void fileWrite(std::string word, int number);

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

int main() {

    std::cout << "word" << std::endl;
    std::cin >> word;
    std::cout << "number?" << std::endl;
    std::cin >> number;

    fileWrite(word, number);
    return 0;
}

void fileWrite(std::string word, int number) {
    std::ofstream myFile;
    myFile.open("../my-file.txt");
    if (myFile.is_open()) {
        for (int i = 0; i < number; ++i) {
            myFile << word << "\n";

        }
        myFile.close();
    } else {
        std::cout << "........." << std::endl;
    }


}