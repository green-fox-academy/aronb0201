#include <stdio.h>
#include <mem.h>

int main() {
    char user_data[30];
    printf("give me your last name, first name and age, divided by , and without spaces");
    scanf("%s", user_data);

    char *first_name = strtok(user_data, ",");

    printf("first name is %s\n", first_name);
    char *last_name = strtok(NULL, ",");
    printf("your last is: %s\n", last_name);

    char *age = strtok(NULL, ",");
    printf("your age is:%s", age);

    //int * age = strtok(NULL, ",");




    return 0;
}