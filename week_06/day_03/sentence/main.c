#include <stdio.h>
#include <mem.h>



// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void *write(char string[256]);

int main() {
    printf("Type in a sentence:\n\n");
    char string[256] = "i know how it feel to wake up, fucked up.";
    
    write(string);
    return (0);
}

void *write(char string[256]) {
    char *proba = strtok(string, " .");
    while (proba != NULL) {
        printf("%s\n", proba);
        proba = strtok(NULL, " .");

    }

}