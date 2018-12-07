//
// Created by Titkos on 06/12/2018.
//

#ifndef SANDWICH_SANDWICH_H
#define SANDWICH_SANDWICH_H

typedef struct {
    char  name[20];
    float price;
    float weight;

}sandwich_t;

float the_price(sandwich_t sandwich, int number_of_sandwiches );


#endif //SANDWICH_SANDWICH_H
