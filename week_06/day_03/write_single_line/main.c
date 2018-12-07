#include <stdio.h>

int main() {

    FILE * name;
    name = fopen("../name.txt", "w");
    fprintf(name,"aron baracs");
    fclose(name);


    return 0;
}