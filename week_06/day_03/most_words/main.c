#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_WORDS   1000


int main() {

    int count[MAX_WORDS];
    char word[310];
    char words[MAX_WORDS][310];
    int unique;

    int length;
    int index;
    int i;


    FILE *text;
    text = fopen("../text.txt", "r");
    for (i=0; i<MAX_WORDS; i++)
        count[i] = 0;


index = 0;

    while (fscanf(text, "%s", word) != EOF) {
        strlwr(word);
        length =strlen(word);
        if(ispunct(word[length-1]))
            word[length-1]='\0';
        
        unique =1;
        for (i = 0; i <index&& unique ; ++i) {
            if(strcmp(words[i],word)==0)
                unique =0;
        }

        if(unique){
            strcpy(words[index], word);
            count[index]++;

            index++;
        } else
        {
            count[i-1]++;
        }
    }
    for(i=0; i<index; i++) {
        printf("%-15s => %d\n", words[i], count[i]);

    }
    for (int j = 0; j <index ; ++j) {
        if(count[j]==44){
            printf("the most used word is %s", words[j]);
            break;
        }
    }



    return 0;
}