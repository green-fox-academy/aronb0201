#include <iostream>

int main() {

    int x;
    std::cout << "enter a number" << std::endl;

    std::cin >> x;


    if( x % 2 == 0 )
        { std::cout << "even" << std::endl;}
    else
        { std::cout << "odd" << std::endl; }


    return 0;
}