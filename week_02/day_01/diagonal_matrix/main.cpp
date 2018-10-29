#include <iostream>

int main() {

    //Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output
    int x = 0;
    int y = 1;

    sizeof(x);
    sizeof(y);


    int matrix [x] [y]  ;




    for ( int i = 0; x<(sizeof(x) / sizeof(x[0]); ++i) {

        for (int i = 0; i < 4; ++i) {
            std::cout << matrix[i][i] << std::endl;
        }

    }


    }



