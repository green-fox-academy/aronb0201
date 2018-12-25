#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "phones.h"


char *get_oldest_phone(phones_t *phone_array, char *oldest);

int get_screen_size_count(phones_t *array, enum screen_size size);
int age_diff (phones_t smartphone);
int main() {

    struct phones smartphones[255];

    int base_price = 300;

    int age_differ = (2018-smartphones->release_date)*50;
    char buffer[255];
    char *akarmi;
    int counter = 0;
    char oldest[100];
    FILE *phones;
    FILE *price_calc;
    phones = fopen("../phones.txt", "r");
    price_calc = fopen("../price_calc.txt", "w");

    while (fgets(buffer, 255, phones)) {
        akarmi = strtok(buffer, " ");
        strcpy(smartphones[counter].name, akarmi);
        akarmi = strtok(NULL, " ");
        smartphones[counter].release_date = atoi(akarmi);
        akarmi = strtok(NULL, "\n");
        int akarmi_screen = atoi(akarmi);
        if (akarmi_screen >= 15) {
            smartphones[counter].screen_size = BIG;
        } else if (akarmi_screen >= 12) {
            smartphones[counter].screen_size = MEDIUM;
        } else {
            smartphones[counter].screen_size = SMALL;
        }

        counter++;


    }
    for (int i = 0; i < counter; ++i) {
        fputs(smartphones[i].name, price_calc);

        if (smartphones[i].screen_size == BIG) {
            fputs("  ", price_calc);
            fprintf(price_calc, "%d", ((base_price+300)+age_diff(smartphones[i])));
        } else if (smartphones[i].screen_size == MEDIUM) {
            fputs("  ", price_calc);
            fprintf(price_calc, "%d", ((base_price+100)+age_diff(smartphones[i])));
        } else {
            fputs("  ", price_calc);
            fprintf(price_calc, "%d", ((base_price)+age_diff(smartphones[i])));
        }
        fputs("\n",price_calc);

    }


    fclose(phones);

    for (int j = 0; j < counter; ++j) {
        phone_array[j] = smartphones[j];

    }


    /*for (int i = 0; i < counter; ++i) {
        puts(smartphones[i].name);
        printf("screen: %d\n", smartphones[i].screen_size);
        printf("release %d\n", smartphones[i].release_date);

    }*/

    printf("the oldest is %s\n", get_oldest_phone(phone_array, oldest));

    printf(" the number is %d\n", get_screen_size_count(phone_array, SMALL));

}

char *get_oldest_phone(phones_t *phone_array, char *oldest) {
    int oldest_age = phone_array[0].release_date;
    for (int i = 0; i < 15; ++i) {
        if (phone_array[i].release_date < oldest_age) {
            oldest_age = phone_array[i].release_date;
            strcpy(oldest, phone_array[i].name);
        }
    }
    return oldest;
}

int get_screen_size_count(phones_t *array, enum screen_size size) {
    int counter = 0;
    for (int i = 0; i < 15; ++i) {
        if (array[i].screen_size == size) {
            counter++;
        }
    }
    return counter;
}

int age_diff (phones_t smartphone){
    int price =(2018-smartphone.release_date)*50;
    if(price>250){
        return 250;
    }
    else{
        return price;
    }

}

