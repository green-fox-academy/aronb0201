#include <iostream>
#include <algorithm>
#include <string>


std::string toChange = "example";
char x = 'x';
char y = 'y';

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.
std::string xToY();
int main() {


std::cout << xToY() << std::endl;


    return 0;
}

std::string xToY(){

    std::replace(toChange.begin(),toChange.end(),x,y);
   return toChange;
};