//
// Created by Titkos on 07/12/2018.
//

#include <mem.h>
#include "pirates.h"

int sum_gold_of_pirates(pirate_t pirate[], int length){
    int sum_of_gold = 0;
    for (int i = 0; i <length ; ++i) {
        sum_of_gold+=pirate[i].gold_count;
    }
    return sum_of_gold;
}
int average_gold_of_pirates(pirate_t pirate[],int length){
    int sum_of_gold = 0;
    int average_gold = 0;
    for (int i = 0; i <length ; ++i) {
        sum_of_gold+=pirate[i].gold_count;
        average_gold = sum_of_gold/length;
    }
    return average_gold;
}
char * name_of_the_richest_woodlegged_pirate(pirate_t pirate[],int length){
    char richest_woodlegged_pirate[] = "        " ;
    int richest = pirate[0].gold_count;
    for (int i = 0; i <length ; ++i) {
        if(pirate[i].gold_count>richest){
            richest = pirate[i].gold_count;
        }
    }
    for (int j = 0; j <length ; ++j) {
        if(pirate[j].gold_count == richest&&pirate[j].has_wooden_leg==1){
            strcpy(richest_woodlegged_pirate, pirate[j].name);
            return strcat(pirate[j].name, " the wealthiest pirate");
        }
    }
    return "they have solid legs";
}