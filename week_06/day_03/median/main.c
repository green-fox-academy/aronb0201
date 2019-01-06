#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct group {
    char name[7];
    int adatok[15];

} group_t;
struct group group_array[4];

int main() {


    char buffer[500];


    char *token;
    FILE *group_file;
    group_file = fopen("../text.txt", "r");
    int counter = 0;
    char end_line;
    int temp_adat[15];


    while (fgets(buffer, 500, group_file)) {

        for (int i = 0; i < 4; ++i) {

            token = strtok(buffer, ":");
            strcpy(group_array[counter].name, token);


            for (int j = 0; j < 15; ++j) {

                token = strtok(NULL, ",");
                temp_adat[j] = atoi(token);
                group_array[counter].adatok[j] = temp_adat[j];
            }


        }
        counter++;


    }

    for (int j = 0; j < 4; ++j) {
        printf(" name is %s :", group_array[j].name);
        for (int i = 0; i < 15; ++i) {
            printf("%d", group_array[j].adatok[i]);
        }
        puts("\n");
    }
    return 0;
}