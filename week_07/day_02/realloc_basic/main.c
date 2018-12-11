#include <stdio.h>
#include <stdlib.h>

int main() {


    int x;
    int y;
    int sums = 0;
    printf("homany?\n");
    scanf("%d", &x);

    int * x_alloc = malloc(x* sizeof(int));

    for (int i = 0; i <x; ++i) {
        printf("number brah");
        scanf("%d", &y);
        x_alloc[i] = y;
        sums+=y;

    }



    x_alloc = (int *)realloc(x_alloc, sums* sizeof(int));

    for (int k = 0; k <sums ; ++k) {
        x_alloc[k] = k;
    }

    for (int j = 0; j < sums ; ++j) {
        printf("%d", x_alloc[j]);
    }

    free(x_alloc);

    return 0;
}