#include <stdio.h>
#include <mem.h>

int distance(char *str, char find);

int main() {
    char str[] = "This is a sample string";

    printf("%d", distance(str, 's'));


    return 0;
}

int distance(char *str, char find) {

    char *first = strchr(str, find);
    int first_index = (int) (find - *str);

    char *last = strrchr(str, find);
    int last_index = last - str;

    return first_index - last_index;

}