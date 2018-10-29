#include <iostream>

std::string al = "Greenfox";
void greet();
std::string name;

int main() {
    std::cout << "give me a name" << std::endl;
    std::cin >> name;
    greet();
    std::cout << " Greetings " << name << std::endl;

}

void greet () {
    std::cout << "greetings dear, " << al << std::endl;


}

// - Create a string variable named `al` and assign the value `Greenfox` to it
// - Create a function called `greet` that greets it's input parameter
// - Greeting is printing e.g. `Greetings dear, Greenfox`
// - Greet `al`