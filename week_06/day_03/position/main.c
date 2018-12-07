#include <stdio.h>
#include <mem.h>


int main() {

    char string[55] = "This is a string for testing";
    char *p;
    int index;


        char * akarmi = strtok(string," .");
        while (akarmi!=NULL) {
            p = strchr(string, 'i');
            index = (int) (p - string);
            akarmi = strtok(NULL," .");
            printf("%d", index);
        }





    return 0;
}

