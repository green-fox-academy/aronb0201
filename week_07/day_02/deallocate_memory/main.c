#include <stdio.h>
#include <stdlib.h>

int main() {

    int *array = malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; ++i) {
        array[i] = i * 2;
    }

    for (int k = 0; k < 10; ++k) {
        printf("%d\n", array[k]);
    }

    free(array);
    printf("Hello, World!\n");
    return 0;
}