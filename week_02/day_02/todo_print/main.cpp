#include <iostream>
#include <string>

int main() {

    std::string todoText = " - Buy milk\n";
    std::string downloadDiablo = "\t - download games \n \t\t - Diablo";
    std::string firstLine = "my todo \n";
    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indention

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo


    todoText.insert(0, firstLine);
    todoText.append(downloadDiablo);





    std::cout << todoText << std::endl;



    std::cout << "Hello, World!" << std::endl;
    return 0;
}