#include <stdio.h>

int line_counter(FILE *gucci_mane_changed);
int main() {

    FILE *gucci_mane_changed;
    gucci_mane_changed = fopen("../text.txt", "r");



    printf("%d", line_counter(gucci_mane_changed));

    fclose(gucci_mane_changed);


    return 0;
}

int line_counter(FILE *gucci_mane_changed){
    int ch = 0;
    int counter = 0;
    if(gucci_mane_changed==NULL){
        return 0;
    }
    else{
        while (!feof(gucci_mane_changed)){
            ch = fgetc(gucci_mane_changed);
            if(ch == '\n')
            counter++;
        }
    }
    return counter;

}