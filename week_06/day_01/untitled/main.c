#include <stdio.h>
#include <mem.h>

int lengthOfString(char * name);

int main() {
    char  name[100];

    printf("your name?\n");
    scanf("%s", name);

    int nameSize = strlen(name);
    printf("%d\n", nameSize);

    printf("%d\n",lengthOfString(name) );

    printf("Hello, World!\n");
    return 0;
}

int lengthOfString(char * name){
    int counter = 0;
    for (int i = 0; name[i]!='\0' ; ++i) {
            counter++;

    }
    return  counter;
}