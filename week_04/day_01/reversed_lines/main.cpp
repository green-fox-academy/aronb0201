#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

std::string first;

int main() {
    // Create a program that decrypts the file called "reversed-lines.txt",
    // and pritns the decrypred text to the terminal window.


    std::ifstream text;
    text.open("../reversed_lines.txt");
    if (text.is_open()) {
        while (std::getline(text, first)) {
            /*for (int i = 1; i <= first.length(); ++i) {
                std::cout << first[first.length() - i] << std::endl;
            }*/
            std::reverse(std::begin(first),std::end(first));
            std::cout << first << std::endl;
        }

        return 0;

    }
    }
