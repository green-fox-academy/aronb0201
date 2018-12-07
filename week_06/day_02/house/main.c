#include <stdio.h>
#include <mem.h>
#include "house.h"

int main() {
        house_t houses[2];

        house_t house1;
        strcat(house1.adress,"kossuth6");
        house1.area_m2 = 200;
        house1.number_of_rooms = 10;
        house1.price = 60000;
        houses[0] = house1;

        house_t house2;
        strcat(house2.adress, "kossuth7");
        house2.area_m2 = 300;
        house2.number_of_rooms = 8;
        house2.price = 130000;
        houses[1] = house2;
        printf("%s", worth_to_buy(&house1) == 1 ? "This house is worth to buy!\n" : "This house is not worth to buy!\n");
        printf("%s", worth_to_buy(&house2) == 1 ? "This house is worth to buy!\n" : "This house is not worth to buy!\n");
        printf("%d", houses_worth_to_buy(houses, 2));


        return 0;
    }
