#include <stdio.h>
#include <stdlib.h>

#include <string.h>

typedef struct resoults {

} resoult_t;


typedef struct student {
    float exams;

} student_t;

typedef struct class {
    int student_number;
    char class_name[3];
    struct student *students;

} class_t;
struct class *clases;
struct resoult *resoults_array;


float average_of_all_exam(struct class *clasesn, int number_of_classes);

int main() {
    int class_number;


    printf("how many classes took the exam?\n");
    scanf("%d", &class_number);
    clases = malloc(class_number * sizeof(struct class));

    for (int i = 0; i < class_number; ++i) {
        printf("name of the class %d ? \n", i);
        scanf("%s", clases[i].class_name);

        printf("how many students took the exam of class %s ?\n", clases[i].class_name);
        scanf("%d", &clases[i].student_number);
        clases[i].students = malloc(clases[i].student_number * sizeof(struct student));

        for (int j = 0; j < clases[i].student_number; ++j) {
            resoults_array = malloc(clases[i].student_number * sizeof(struct resoults));
            printf("give me the percentage of the exams in class %s os student %d \n", clases[i].class_name, j);
            scanf("%f", &clases[i].students[j].exams);

        }


    }
    for (int k = 0; k < class_number; ++k) {
        printf("name of class %s students are in it %d\n", clases[k].class_name, clases[k].student_number);

        for (int j = 0; j < clases[k].student_number; ++j) {
            printf("exam resoults are %f \n", clases[k].students[j].exams);

        }


    }

    printf("average iz %f", average_of_all_exam(clases, class_number));

    return 0;
}

float average_of_all_exam(struct class *clases, int number_of_classes) {
    float sum = 0;
    int number_of_pepole = 0;

    for (int i = 0; i < number_of_classes; ++i) {
        number_of_pepole += clases[i].student_number;
    }
    for (int j = 0; j < number_of_classes; ++j) {
        for (int i = 0; i < clases[j].student_number; ++i) {
            sum += clases[j].students[i].exams;
        }

    }
    return sum / (float) number_of_pepole;
}


