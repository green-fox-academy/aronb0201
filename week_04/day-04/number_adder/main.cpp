#include <iostream>


int numberAdder(int n, int x);

int main() {
    int x = 1;
    int n = 5;

    numberAdder(n,x);

    return 0;
}

int numberAdder(int n,int x){
   if (x == n+1){
        return n;
    }
    else {
        std::cout << (x++) << std::endl;
        numberAdder(n,x);
    }



}