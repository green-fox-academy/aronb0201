#include <iostream>

int main() {

    int firstNum;
    int secondNum;
    int thirdNum;
    int forthNum;
    int fifthNum;

    std::cout << " Give me the first number! " << std::endl;
    std::cin >> firstNum;

    std::cout << " give me the second number! " << std::endl;
    std::cin >> secondNum;

    std::cout << " give me the third!" << std::endl;
    std::cin >> thirdNum;

    std::cout << " give me the fourth " << std::endl;
    std::cin >> forthNum;

    std::cout << " give me the fifth " << std::endl;
    std::cin >> fifthNum;

    std::cout << "Your numbers are : " << firstNum << " , " << secondNum << " , " << thirdNum << " , " << forthNum << " and " << fifthNum << " . " << std::endl;

    std::cout << " Sum : " << firstNum + secondNum + thirdNum + forthNum + fifthNum << std::endl;
    std::cout << " the average is : " << (firstNum + secondNum + thirdNum + forthNum + fifthNum) / 5.0 << std::endl;




    return 0;
}