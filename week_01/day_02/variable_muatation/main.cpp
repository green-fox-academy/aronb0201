#include <iostream>

int main() {

    int a = 3;
    // make the "a" variable's value bigger by 10

    std::cout << a << std::endl;
    std::cout << a + 10 << std::endl;

    int b = 100;
    // make b smaller by 7

    std::cout << b << std::endl;
    std::cout << b - 7 << std::endl;


    int c = 44;
    // please double c's value

    std::cout << c << std::endl;
    std::cout << c * 2 <<std::endl;

    int d = 125;
    // please divide by 5 d's value

    std::cout << d << std::endl;
    std::cout << d / 5 << std::endl;

    int e = 8;
    // please cube of e's value

    std::cout << e << std::endl;
    std::cout << e * e << std::endl;

    int f1 = 123;
    int f2 = 345;
    // tell if f1 is bigger than f2 (print as a boolean)

    std::cout << (bool(f2 > f1 ) ) << std::endl;

    int g1 = 350;
    int g2 = 200;
    // tell if the double of g2 is bigger than g1 (print as a boolean)

    std::cout << (bool( (g2*2) > g1 ) ) << std::endl;


    int h = 135798745;
    // tell if it has 11 as a divisor (print as a boolean)

    std::cout << (bool ( h / 11 ) ) << std::endl;


    int i1 = 10;
    int i2 = 3;

    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)

    std::cout << (bool ( i1 > ( i2 * 2 ) ) ) << std::endl;


    int j = 1521;
    // tell if j is dividable by 3 or 5 (print as a boolean)
    std::cout << std::boolalpha << (bool ( j / 3 ) ) << std::endl;
    std::cout << (bool ( j / 5 ) ) << std::endl;

    std::string k = "Apple";
    //fill the k variable with its content 4 times

    std::cout << k + k + k + k << std::endl;


    return 0;
}