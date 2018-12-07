#include <stdio.h>
int oddOrEven(int inputnumber);
int main() {

    int inputNumber;

    printf("give me the the num");
    scanf("%d", &inputNumber);

    printf("%d\n", oddOrEven(inputNumber));

    printf("Hello, World!\n");
    return 0;
}

int oddOrEven(int inputnumber){

    if(inputnumber % 2 ==0){
        return 1;
    }else {
        return 0;
    }
}