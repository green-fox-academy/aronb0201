#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct movies {
    char *movie_title;
    int profit;
    int release_year;
} movies_t;

struct movies movies_array[50];

int main() {

    char buffer[2500];

    int *buffer_size;
    FILE *movie_file;
    int counter = 0;
    int counter2 = 0;
    movie_file = fopen("../text.txt", "r");


    char **token = (char **) malloc(100 * sizeof(char));
    buffer_size = (int *) malloc(2500);

    while (fgets(buffer, buffer_size, movie_file)) {
        buffer_size = (int) realloc(buffer_size, strlen(buffer));
        *token = strtok(buffer, "$");
        int slen = strlen(*token);
        movies_array[counter].movie_title = (char *) malloc(slen * sizeof(int));

        strcpy(movies_array[counter].movie_title, *token);
        while (!strtok(NULL, " ")) {

            *token = strtok(NULL, ",");
            movies_array[counter2].profit += (atoi(*token)) * 100000000;
            *token = strtok(NULL, ",");
            movies_array[counter2].profit += (atoi(*token)) * 100000;
            *token = strtok(NULL, ",");
            movies_array[counter2].profit += (atoi(*token)) * 1000;
            counter2++;

        }
        *token = strtok(NULL, "\n");
        movies_array[counter].release_year = atoi(*token);
        counter++;
    }

    for (int i = 0; i < counter; ++i) {
        printf("%s ", movies_array[i].movie_title);
        printf("%d ", movies_array[i].profit);
        printf("%d \n", movies_array[i].release_year);

    }


    return 0;


}