#include <iostream>
#include <vector>


#include "DiceSet.h"

int main(int argc, char *args[]) {
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;
    diceSet.roll();


    for (int i = 0; i < 6; ++i) {
        if (diceSet.getCurrent(i) != 6) {
            for (int i = 0; i < 6; ++i) {
                diceSet.roll(i);
                if (diceSet.getCurrent(i) != 6) {
                    diceSet.roll(i);
                } else {
                    std::cout << diceSet.getCurrent(i) << std::endl;
                }
            }
        } else {
            std::cout << diceSet.getCurrent(i) << std::endl;
        }
    }

    return 0;
}