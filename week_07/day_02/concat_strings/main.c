#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat_string(char *string1, char *string2);

int main() {
    printf("Hello, World!\n");
    char *egy[100];
    char *ketto[100];

    scanf("%s", egy);
    scanf("%s", ketto);
    
    printf(concat_string(egy, ketto));

    return 0;
}


char *concat_string(char *string1, char *string2) {
    char *concated_string = malloc(strlen(string1) + strlen(string2) + 1);
    strcpy(concated_string, string1);
    strcat(concated_string, string2);
    return concated_string;

}