#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int main() {

    int * array1 = malloc(sizeof(int)*10);
    int * array2 = malloc(sizeof(int)*10);
    int * both_arrays = malloc(sizeof(int)*20);



    for (int i = 0; i <21 ; ++i) {
            array1[i] = i*2;
    }
    int odd = 1;
    for (int k = 0; k <20 ; ++k) {

        array2[k] = odd;
        odd+=2;
    }

    memcpy(both_arrays, array1, 10* sizeof(int));
    memcpy(both_arrays+10, array2, 10* sizeof(int));

    for (int j = 19; j >0 ; --j) {
        printf("%d", both_arrays[j]);
    }


    return 0;
}