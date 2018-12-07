//
// Created by Titkos on 06/12/2018.
//

#ifndef PC_PERSONAL_COMPUTER_H
#define PC_PERSONAL_COMPUTER_H

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

#endif //PC_PERSONAL_COMPUTER_H
