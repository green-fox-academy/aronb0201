#include <iostream>

int main() {

    int p1 [3] {1, 2, 3};
    int p2 [2] {4, 5 };


    int x =(sizeof(p1)/sizeof(p1[0]));

    int y =(sizeof(p2)/sizeof(p2[0]));

    if (y>x){

        std::cout << "p2 is bigger" << std::endl;
    }
    else if (y<x) {

        std::cout << " p1 is bigger" << std::endl;
    }

    return 0;
}


// - Create an array variable named `p1`
//   with the following content: `[1, 2, 3]`
// - Create an array variable named `p2`
//   with the following content: `[4, 5]`
// - Print if `p2` has more elements than `p1`
