#include <stdio.h>

int main() {

    char * name = "aron baracs";
    int age = 26;
    float height = 1.82;


    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", height);

    printf("my name is: %s , my age is %d , my height is %.2f ", name, age, height);
    return 0;
}