#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.
void countFromN(int);

int main() {

    int n = 5;

    countFromN(n);


    return 0;
}

void countFromN(int n) {

    if (n > 0) {
        std::cout << (n - 1) << std::endl;
        countFromN(n - 1);
    }


};