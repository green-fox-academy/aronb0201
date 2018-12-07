#include <stdio.h>

int main() {

    FILE *gucci_mane_changed;
    char input[300];

    gucci_mane_changed = fopen("../text.txt", "r");
    if (gucci_mane_changed == NULL) {
        printf("can not open gucci lyrics");
    } else {
        while (!feof(gucci_mane_changed)) {
            fgets(input, 300, gucci_mane_changed);
            printf("%s", input);

        }
        fclose(gucci_mane_changed);
    }


    return 0;
}