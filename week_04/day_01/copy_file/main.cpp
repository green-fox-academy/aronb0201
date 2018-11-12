#include <iostream>
#include <fstream>
#include <string>


std::string text;

bool copyPaste();
// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

int main() {

    copyPaste();
    std::cout << std::boolalpha << copyPaste() << std::endl;


    return 0;
}


bool copyPaste() {
    std::ofstream pasteFile;
    std::ifstream copyFile;
    copyFile.open("../copy.txt");
    pasteFile.open("../paste.txt");
    if (pasteFile.is_open()) {
        while (getline(copyFile, text)) {
            pasteFile << text << "\n";
        }
        pasteFile.close();
        return true;
    } else {
        return false;
    }

}