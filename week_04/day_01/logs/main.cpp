#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


std::string day;
std::string month;
int numberOfDay;
std::string time;
int year;
std::string ip;
std::string postGet;
std::string divider;

std::vector<std::string> arrayIP();

std::vector<std::string> getPostRatio();



// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

int main() {

    arrayIP();
    getPostRatio();

    for ( int i = 0; i < arrayIP().size(); ++i){
        std::cout << arrayIP().at(i) << std::endl;
    }
    for ( int i = 0; i < getPostRatio().size(); ++i){
        std::cout << getPostRatio().at(i) << std::endl;
    }


}


std::vector<std::string> arrayIP() {
    std::ifstream logs;

    std::vector<std::string> ipAdresses;
    logs.open("../logs.txt");

    if (logs.is_open()) {
        while (logs >> day >> month >> numberOfDay >> time >> year >> ip >> postGet >> divider) {
            ipAdresses.push_back(ip);

        }

    } else {
        std::cout << "no" << std::endl;
    }
    logs.close();
    std::sort(ipAdresses.begin(), ipAdresses.end());
    auto last = std::unique(ipAdresses.begin(), ipAdresses.end());
    ipAdresses.erase(last, ipAdresses.end());
    return ipAdresses;


}

std::vector<std::string> getPostRatio() {

    std::ifstream logs;

    std::vector<std::string> getPush;
    logs.open("../logs.txt");

    if (logs.is_open()) {
        while (logs >> day >> month >> numberOfDay >> time >> year >> ip >> postGet >> divider) {
            getPush.push_back(postGet);

        }
    } else {
        std::cout << "nope" << std::endl;
    }
    return getPush;

}