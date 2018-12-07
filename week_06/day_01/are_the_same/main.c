#include <stdio.h>
#include <mem.h>

int sameString(char * string1, char * string2);

int main() {

    char  string1[100];
    char  string2[100];

    printf(" first string: ");
    scanf("%s", string1);

    printf(" second string");
    scanf("%s", string2);

    printf("%d\n", sameString(string1,string2));


    printf("Hello, World!\n");
    return 0;
}

int sameString(char * string1, char * string2){

    if(/*!strcmp(string1,string2)&&*/!strcasecmp(string1,string2)){
        return 1;

    }else {
        return 0;
    }
}