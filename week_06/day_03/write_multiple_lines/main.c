#include <stdio.h>

void write_to_file(FILE *money, char *word, int number);

int main() {

    FILE *money;

    write_to_file(money, "cash\n", 5);

    printf("Hello, World!\n");
    return 0;
}

void write_to_file(FILE *money, char *word, int number) {
    money = fopen("../money.txt", "w");


    for (int i = 0; i < number; ++i) {
        fprintf(money, word);

    }
    fclose(money);

}