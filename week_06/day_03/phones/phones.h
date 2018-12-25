//
// Created by Titkos on 25/12/2018.
//

#ifndef INC_09_PHONES_H
#define INC_09_PHONES_H
enum screen_size{
    BIG,
    MEDIUM,
    SMALL
};

typedef struct phones{
    char name[255];
    int release_date;
    enum screen_size screen_size;


}phones_t;
struct phones phone_array[100];
#endif //INC_09_PHONES_H
