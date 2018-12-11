#include <stdio.h>
#include <stdlib.h>

int main() {

    int * array=  malloc(sizeof(int)*10);
    for (int i = 0; i <5 ; ++i) {
        array[i] = i;
    }

    for (int j = 0; j <5 ; ++j) {
        printf("%d", array[j]);
    }

    free(array);

    printf("Hello, World!\n");
    return 0;
}