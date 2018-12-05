#include <stdio.h>

int main() {
    int inputNumber;

    printf("give me a number");
    scanf("%d",&inputNumber );

    if(inputNumber>=18){
        printf("you can get booze in hungary\n");
    }
    else{
        printf("you are too young to drink bruv\n");
    }

    printf("Hello, World!\n");
    return 0;
}