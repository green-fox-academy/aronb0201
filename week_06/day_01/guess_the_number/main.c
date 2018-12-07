#include <stdio.h>

int main() {


    int number = 8;
    int inputNumber;


    printf("give me a number\n");
    scanf("%d", &inputNumber);

    if(number>inputNumber){
        printf("your number is to low\n");
    }else if(number<inputNumber) {
        printf("your number is too high\n");
    }else if ( inputNumber == number){
        printf("you guessed correctly\n");
    }


    printf("Hello, World!\n");
    return 0;
}