#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int sumDigits(int x);

int main() {

    int x = 5;

    std::cout << sumDigits(x) << std::endl;

    return 0;
}

int sumDigits(int x) {

    if (x == 0) {
        return 0;
    } else if (0 <= x) {
       return x + sumDigits(x - 1);

    }

}