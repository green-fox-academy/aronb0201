#include <iostream>


int main() {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    int hoursInADay = 24;
    int minutesInAnHour = 60;
    int secondsInAMinute = 60;

    std::cout << ( ( ( hoursInADay * 3600 ) - ( currentHours * 3600 ) ) + ( ( minutesInAnHour * secondsInAMinute ) - ( currentMinutes * secondsInAMinute ) ) ) + currentSeconds << " seconds remained of this day" << std::endl;



    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables


    return 0;
}