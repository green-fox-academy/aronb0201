#include <iostream>

int main() {


    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");
    std::string from = " you ";
    std::string till = "y";
    std::string add =  "always takes longer than ";


    int start_pos = quote.find(from);

    quote.replace((start_pos+1), (till.length()-1), add );
    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    std::cout<< quote << std::endl;

    return 0;
}