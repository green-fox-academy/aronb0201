#include <stdio.h>
#include <mem.h>

int indexOfChar(char inputString[100], char inputChar);

int main() {
    char inputString[100];
    char inputChar;

    printf("string, plox\n");

    scanf("%s",inputString );

    printf("giveme a char of it\n");
    scanf(" %c", &inputChar);

    printf("%d", indexOfChar(inputString, inputChar));

    char * s = strchr(inputString, inputChar);
    printf("%s", s);

    return 0;
}

int indexOfChar(char inputString[100], char inputChar){
for (int i = 0; inputString[i] !='\0' ; ++i) {
        if(inputString[i] == inputChar){
            return i;
        }
    }
}