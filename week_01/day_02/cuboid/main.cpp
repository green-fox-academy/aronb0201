#include <iostream>

int main() {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000
    // surface = 2 (lw + wh + hl)
    // Volume = Length * Width * Height


    int h = 5;
    int w = 6;
    int l = 8;

    std::cout << 2 * ( ( l * w ) + ( w * h ) + ( h * l ) ) << " is the surface of this cuboid" << std::endl;
    std::cout << l * w * h << " this is the volume of this cuboid" << std::endl;



    return 0;
}