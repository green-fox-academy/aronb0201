//
// Created by Titkos on 07/12/2018.
//

#ifndef UNTITLED1_HOUSE_H
#define UNTITLED1_HOUSE_H

typedef struct {
    char adress[100];
    float price;
    int number_of_rooms;
    float area_m2;

} house_t;


int worth_to_buy(house_t * house);
int houses_worth_to_buy(house_t house[], int length );


#endif //UNTITLED1_HOUSE_H
