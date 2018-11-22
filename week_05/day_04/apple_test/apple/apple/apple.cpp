//
// Created by Titkos on 22/11/2018.
//
#include <string>
#include <numeric>
#include <vector>
#include <iostream>
#include <iterator>


std::string getApple() {

    return "apple2";
}

int sum(std::vector<int> elements){
    int summarize =0;
    for (int i = 0; i < elements.size(); ++i )
    {
        summarize +=elements[i];


    }
    return summarize;
}



