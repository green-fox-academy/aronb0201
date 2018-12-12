#include <stdio.h>
#include <string.h>


enum transmission {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMIAUTOMATIC,
    DUALCLUTCH
};

typedef struct {
    char name[256];
    float price;
    int year_of_manufacture;
    enum transmission trans;

} car_t;


char *return_older_car_than(car_t car[], int array_length, int age);
int get_transmission_count(car_t car[], int array_length,enum transmission AUTOMATIC);

int main() {

    car_t car1;
    car_t car2;
    car_t car3;
    car_t car4;

    strcpy(car1.name, "audi");
    car1.price = 1233;
    car1.year_of_manufacture = 1987;
    car1.trans = MANUAL;

    strcpy(car1.name, "nissan");
    car2.price = 1566;
    car2.year_of_manufacture = 1991;
    car2.trans = AUTOMATIC;

    strcpy(car3.name, "toyota");
    car3.price = 1770;
    car3.year_of_manufacture = 1993;
    car3.trans = CVT;

    strcpy(car4.name, "suzuki");
    car4.price = 1990;
    car4.year_of_manufacture = 2010;
    car4.trans = AUTOMATIC;

    car_t car_array[4] = {car1, car2, car3, car4};

    printf("%s\n", return_older_car_than(car_array, 4, 1990));
    printf("%d", get_transmission_count(car_array,4,AUTOMATIC));

    return 0;
}

char *return_older_car_than(car_t car[], int array_length, int age) {
    for (int i = 0; i < array_length; ++i) {
        if (car[i].year_of_manufacture < age) {
            return car[i].name;
        }
    }
}

int get_transmission_count(car_t car[], int array_length,enum transmission AUTOMATIC){
    int counter =0;
    for (int i = 0; i <array_length ; ++i) {
        if(car[i].trans == AUTOMATIC){
            counter++;
        }
    }
    return counter;
}