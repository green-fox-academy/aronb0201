#include <iostream>
#include <string>





int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";
    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indention

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    std::string fistLine = "My todo: \n";                                 //az első beillesztendő szöveget definiálom mitn string, hogy használhassam rá az insert parancsot
    std::string reminingText = " - Download games\n \t - Diablo";           // a maradékot szintén, az eppend funkcióhoz

    todoText.insert(0, fistLine);                                            // a 0. betű re insertelem, a fisrt line stringemet, ezzel megjelenik majd a todoTextet "eltolja"
    todoText.append(reminingText);                                           // végére egyszerűen .append a maradék rendesen formázott szöveget

    std::cout << todoText << std::endl;

    return 0;
}