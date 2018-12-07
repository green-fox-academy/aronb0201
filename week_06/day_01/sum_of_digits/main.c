#include <stdio.h>

int equal(int inputNumb1[3], int inputNumb2[3]);

int main() {

    int inputNumb1[3];
    int inputNumb2[3];

    printf("give me the first\n");
    scanf("%d", &inputNumb1);

    printf("give me the second\n");
    scanf("%d", &inputNumb2);

    printf("%d\n", equal(inputNumb1, inputNumb2));

    printf("Hello, World!\n");
    return 0;
}

int equal(int inputNumb1[3], int inputNumb2[3]) {


    int sum =0;
    int sum2 = 0;
    for (int i = 0; i < sizeof(inputNumb1) ; ++i) {
        sum += inputNumb1[i];
        sum2+= inputNumb2[i];
        if(sum == sum2){
            return 1;}
            else {
            return 0;
            }
    }


}