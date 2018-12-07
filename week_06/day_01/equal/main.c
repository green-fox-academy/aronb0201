#include <stdio.h>

int compare (int x, int y);

int main() {
    int x;
    int y;

    printf("give me the first numb");
    scanf("%d", &x);

    printf("give me the second numb");
    scanf("%d", &y);



    printf("%d", compare(x,y));
}

int compare (int x, int y){
    if(x == y){
        return 1;
    }
    else{
        return  0;
    }
}