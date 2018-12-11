#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *string_repeat(char *string, int number);

int main() {
    int times;
    char *what[100];

    printf("givme howmany times");
    scanf("%d", &times);

    printf("what?");
    scanf("%s", what);

    printf("%s", string_repeat(what, times));
    
    return 0;
}

char *string_repeat(char *string, int number) {

    char *repeat_string = malloc(strlen(string) * number + 1);
    strcpy(repeat_string, string);
    while (--number) {
        strcat(repeat_string, string);
    }
    return repeat_string;
}