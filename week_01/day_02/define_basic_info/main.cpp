#include <iostream>

int main() {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean

    std::string name = "Aron Baracs";
    int age = 26;
    double heightInMeter =  1.81;
    bool married = false;

    std::cout << "My name is " << name << std::endl;
    std::cout << "I'm " <<  age << " old." << std::endl;
    std::cout << "I'm " << heightInMeter << " meter tall." << std::endl;
    if(married == false)
    {std::cout << "I'm not married" << std::endl; }



    return 0;
}