#include <iostream>

// Create a recursive function called `refactorio`
// that returns it's input's factorial
int refactorio(int x);

int main() {


    std::cout << refactorio(1) << std::endl;
    return 0;
}

int refactorio(int x) {

    if (x <= 1) {
        return 1;
    } else if (x > 1) {
        return x * refactorio(x - 1);
    }
}