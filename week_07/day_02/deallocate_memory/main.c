#include <stdio.h>
#include <stdlib.h>

int main() {
    // with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits



    int* pointer = NULL;

    pointer = (int*)malloc(10* sizeof(int));

    for (int i = 0; i <5 ; ++i) {
        pointer[i]=i;
    }
    for (int j = 0; j <5 ; ++j) {
        printf("%d", pointer[j]);
    }

    realloc(pointer,0);



}