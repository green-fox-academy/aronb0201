#include <stdio.h>
#include <mem.h>
#include "pirates.h"

int main() {
    pirate_t pirates[5];

    pirate_t first;
    strcpy(first.name, "first");
    first.has_wooden_leg = 1;
    first.gold_count = 40;
    pirates[0] = first;

    pirate_t second;
    strcpy(second.name, "second");
    second.has_wooden_leg = 0;
    second.gold_count = 40;
    pirates[1] = second;

    pirate_t third;
    strcpy(third.name, "third");
    third.has_wooden_leg = 1;
    third.gold_count = 100;
    pirates[2] = third;

    pirate_t forth;
    strcpy(forth.name, "forth");
    forth.has_wooden_leg = 0;
    forth.gold_count = 100;
    pirates[3] = forth;

    pirate_t fifth;
    strcpy(third.name, "fifth");
    fifth.has_wooden_leg = 1;
    fifth.gold_count = 1000;
    pirates[4] = fifth;


    printf("these pirates have %d gold\n", sum_gold_of_pirates(pirates, 5));
    printf("they have average of %d gold \n", average_gold_of_pirates(pirates, 5));
    printf("%s\n", name_of_the_richest_woodlegged_pirate(pirates, 5));

    printf("Hello, World!\n");
    return 0;
}