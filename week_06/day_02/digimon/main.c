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

//struct digimon digimon_array[50];
int array_length = 0;


int get_minimum_hp(digimon_t *digimon_array, int array_size);

int same_digivolution_level(digimon_t *digimon_array, int array_size, enum digivolution_level digivolutionLevel);

int same_trainer(digimon_t *digimon_array, int array_size, char tamer_name[256]);

int average_hp_of_same_trainer(digimon_t *digimon_array, int array_size, char tamer_name[256]);

int main() {

    digimon_t digimons[4];

    struct digimon digimon1;
    strcpy(digimon1.name, "digigeci");
    digimon1.age = 2;
    digimon1.health = 100;
    strcpy(digimon1.tamer_name, "senkihazi");
    digimon1.digivolutionLevel = ROOKIE;
    digimons[0] = digimon1;
    struct digimon digimon2;

    strcpy(digimon1.name, "digikocsog");
    digimon2.age = 4;
    digimon2.health = 76;
    strcpy(digimon2.tamer_name, "valamigyoker");

    digimon2.digivolutionLevel = MEGA;
    digimons[1] = digimon2;

    struct digimon digimon3;

    strcpy(digimon3.name, "digifasztudja");
    digimon3.age = 5;
    digimon3.health = 47;
    strcpy(digimon3.tamer_name, "mittudomen");
    digimon3.digivolutionLevel = CHAMPION;
    digimons[2] = digimon3;


    struct digimon digimon4;

    strcpy(digimon4.name, "nemvagas");
    digimon4.age = 7;
    digimon4.health = 55;
    strcpy(digimon4.tamer_name, "mittudomen");
    digimon4.digivolutionLevel = CHAMPION;
    digimons[3] = digimon4;


    printf("%d\n", get_minimum_hp(digimons, 4));

    printf("%d\n", same_digivolution_level(digimons, 4, ROOKIE));

    printf("%d\n", same_trainer(digimons, 4, "mittudomen"));

    printf("%d\n", average_hp_of_same_trainer(digimons, 4, "mittudomen"));


    return 0;


}

int get_minimum_hp(digimon_t *digimon_array, int array_size) {
    array_length = array_size;
    int lovest_hp = 0;
    lovest_hp = digimon_array[0].health;
    for (int i = 0; i < array_length; ++i) {
        if (digimon_array[i].health < lovest_hp) {
            lovest_hp = digimon_array[i].health;
        }

    }
    return lovest_hp;
}

int same_digivolution_level(digimon_t *digimon_array, int array_size, enum digivolution_level digivolutionLevel) {
    array_length = array_size;
    int counter = 0;

    for (int i = 0; i < array_length; ++i) {
        if (digimon_array[i].digivolutionLevel == digivolutionLevel) {
            counter++;

        }

    }
    return counter;
}

int same_trainer(digimon_t *digimon_array, int array_size, char tamer_name[256]) {
    array_length = array_size;
    int counter = 0;

    for (int i = 0; i < array_length; ++i) {
        if (strcmp(digimon_array[i].tamer_name, tamer_name) == 0) {

            counter += 1;
        }


    }
    return counter;
}

int average_hp_of_same_trainer(digimon_t *digimon_array, int array_size, char tamer_name[256]) {
    array_length = array_size;
    int hp_counter = 0;
    int digimon_counter = 0;
    for (int i = 0; i < array_size; ++i) {

            if (strcmp(digimon_array[i].tamer_name, tamer_name) == 0) {
                hp_counter += digimon_array[i].health;
                digimon_counter++;

            }/* else if (strcmp(digimon_array[i].tamer_name, tamer_name) < 0) {
                printf("no tamer like your input,or smthing went wrong\n");
            } else // ((strcmp(digimon_array[i].tamer_name, tamer_name) > 0))
            {
                printf("no tamer like your input, or smthing went wrong\n");
            }*/
        }

    return (hp_counter / digimon_counter);

}