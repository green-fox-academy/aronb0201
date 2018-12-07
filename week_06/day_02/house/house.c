//
// Created by Titkos on 07/12/2018.
//

#include "house.h"

int worth_to_buy(house_t * house){
    if(house->price<house->area_m2*400){
        return 1;
    }else{
        return 0;
    }


}



int houses_worth_to_buy(house_t house[], int length ){

    int counter = 0;
    for (int i = 0; i <length ; ++i) {
        if(worth_to_buy(&house[i])){
            counter++;
        }
    }
    return counter;
}