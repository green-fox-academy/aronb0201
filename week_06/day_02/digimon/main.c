#include <stdio.h>
#include <string.h>

enum digivolution_level {
    BABY,
    IN_TRAINING,
    ROOKIE,
    CHAMPION,
    UTLIMATE,
    MEGA

};


typedef struct digimon {
    char name[128];
    int age;
    int health;
    char tamer_name[256];
    enum digivolution_level digivolutionLevel;

} digimon_t;

struct digimon digimon_array[50];
int array_length = 0;

int get_minimum_hp(struct digimon digimon_array[array_length], int array_size);

int same_digivolution_level(struct digimon *digimon_array, int array_size, enum digivolution_level digivolutionLevel);

int same_trainer(struct digimon *digimon_array, int array_size, char tamer_name[256]);

int main() {

    struct digimon digimon1;
    strcpy(digimon1.name, "digigeci");
    digimon1.age = 2;
    digimon1.health = 100;
    strcpy(digimon1.tamer_name, "senkihazi");
    digimon1.digivolutionLevel = ROOKIE;

    struct digimon digimon2;

    strcpy(digimon1.name, "digikocsog");
    digimon2.age = 4;
    digimon2.health = 76;
    strcpy(digimon2.tamer_name, "valamigyoker");

    digimon2.digivolutionLevel = MEGA;


    struct digimon digimon3;

    strcpy(digimon3.name, "digifasztudja");
    digimon3.age = 5;
    digimon3.health = 47;
    strcpy(digimon3.tamer_name, "mittudomen");
    digimon3.digivolutionLevel = CHAMPION;


    printf("%d\n", get_minimum_hp(&digimon_array[array_length], 3));

    printf("%d\n", same_digivolution_level(&digimon_array[array_length], 3, ROOKIE));

    printf("%d\n", same_trainer(&digimon_array[array_length], 3, "mittudomen"));

    return 0;


}

int get_minimum_hp(struct digimon digimon_array[array_length], int array_size) {
    array_length = array_size;
    int lovest_hp = 0;
    digimon_array[0].health = lovest_hp;
    for (int i = 0; i < array_length; ++i) {
        if (digimon_array[i].health < lovest_hp) {
            digimon_array[i].health = lovest_hp;
        }

    }
    return lovest_hp;
}

int same_digivolution_level(struct digimon *digimon_array, int array_size, enum digivolution_level digivolutionLevel) {
    array_length = array_size;
    int counter = 0;

    for (int i = 0; i < array_length; ++i) {
        if (digimon_array[i].digivolutionLevel == digivolutionLevel) {
            counter++;
        }

    }
    return counter;
}

int same_trainer(struct digimon *digimon_array, int array_size, char tamer_name[256]) {
    array_length = array_size;
    int counter = 0;

    for (int i = 0; i < array_length; ++i) {
        if (strcmp(digimon_array[i].tamer_name, tamer_name) == 0) {
            counter++;
        }


    }
    return counter;
}