#include <iostream>
#include <string>

// When saving this quote a disk error has occured. Please fix it.
// Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law."); //meghatározom, hogy mégis hova kell beillesztenem a kívánt részt

                                                                                    // mivel a feladat szerint a 3. és a 4. szó (It után, you elé) közé kéne beékelnem,
                                                                                    //definiálok egy kezdő pozíciót(start_pos), ami az "It" szó eleje lesz (.find paranccsal megtalálom a 'quote'stringben)
                                                                                    // az "It" szót, hozzárendelem egy stringhez, hogy tudjam kezelni a replace funkcióban .length fügvénnyel

    int start_pos = quote.find("It");
    std::string IT = "It";

    quote.replace (start_pos,IT.length(), " It always takes longer" );              // start_pos --> "It" től kezdve számolja és
                                                                                    // berakja a stringet az
                                                                                    // IT.length --> ( azaz az "It"=2, karakterig)
                                                                                    // A beillesztendő stringbe belerakom a az "It" szót is,
                                                                                    // különben felülírja mivel ez IT szóra definiáltam a hosszokat

    std::cout << quote << std::endl;
    return 0;
}