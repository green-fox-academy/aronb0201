#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

std::string first;

int main() {
    // Create a program that decrypts the file called "reversed-order.txt",
    // and pritns the decrypred text to the terminal window.


    std::ifstream text;
    text.open("../reversed_order.txt");
    if (text.is_open()) {
        while (std::getline(text, first)) {
            /*for (int i=1; i <= first.length();++i){
                std::cout << first[first.length()-i] << std::endl;
            }
            std::reverse(std::begin(first),std::end(first));
            std::cout << first << std::endl;*/
            int i = first.length() - 1;
            int start, end = i + 1;
            std::string result = "";

            while (i >= 0) {
                if (first[i] == ' ') {
                    start = i + 1;
                    while (start != end)
                        result += first[start++];
                    result += ' ';
                    end = i;

                }
                i--;
            }
            start = 0;
            while (start != end)
                result += first[start++];
            std::cout << result << std::endl;


        }


    }

    return 0;
}

