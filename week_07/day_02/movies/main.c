#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct movies {
    char *movie_title;
    long long profit;
    int release_year;
} movies_t;
struct movies movies_array[50];


int gross_counter(struct movies movies_array[50], int year);

int main() {

    char buffer[2500];

    int *buffer_size;
    FILE *movie_file;
    int counter = 1;
    // movies_array = malloc(sizeof(int)*1);


    movie_file = fopen("../text.txt", "r");


    char **token = (char **) malloc(100 * sizeof(char));
    buffer_size = (int *) malloc(2500);

    while (fgets(buffer, buffer_size, movie_file)) {
        buffer_size = (int) realloc(buffer_size, strlen(buffer));
        *token = strtok(buffer, "$");
        int slen = strlen(*token);
        movies_array[counter].movie_title = (char *) malloc(slen * sizeof(int));

        strcpy(movies_array[counter].movie_title, *token);
        //while (!strtok(NULL, " ")) {
        *token = strtok(NULL, ",");
        movies_array[counter].profit += (atoll(*token)) * 1000000000;
        *token = strtok(NULL, ",");
        movies_array[counter].profit += (atoll(*token)) * 1000000;
        *token = strtok(NULL, ",");
        movies_array[counter].profit += (atoll(*token)) * 1000;
        *token = strtok(NULL, " ");
        movies_array[counter].profit += (atoll(*token)) * 1;


        // }
        *token = strtok(NULL, "\n");
        movies_array[counter].release_year = atoi(*token);
        counter++;
        //struct movies *movies_array = (struct movies *)realloc(movies_array,(counter* sizeof(struct movies)));

    }

    for (int i = 0; i < counter; ++i) {
        printf("%s ", movies_array[i].movie_title);
        printf("%d ", movies_array[i].profit);
        printf("%d \n", movies_array[i].release_year);

    }
    // printf("the gross of that year is %d", gross_counter(&movies_array[50], 2017));

    // free(movies_array);
    //free(buffer_size);
    return 0;


}

int gross_counter(struct movies movies_array[50], int year) {
    int year_gross = 0;
    int counter = 1;
    for (int j = 0; j < counter; ++j) {
        if (year == movies_array[j].release_year)
            year_gross += movies_array[j].profit;
        counter++;
    }


    return year_gross;
}