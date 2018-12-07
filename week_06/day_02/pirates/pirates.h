//
// Created by Titkos on 07/12/2018.
//

#ifndef PIRATES_PIRATES_H
#define PIRATES_PIRATES_H

typedef struct {

    char name[30];
    int has_wooden_leg;
    int gold_count;
}pirate_t;

int sum_gold_of_pirates(pirate_t pirate[],int length);
int average_gold_of_pirates(pirate_t pirate[],int length);
char * name_of_the_richest_woodlegged_pirate(pirate_t pirate[],int length);
#endif //PIRATES_PIRATES_H
