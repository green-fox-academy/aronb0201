//
// Created by Titkos on 22/11/2018.
//
#include <iostream>
#include <algorithm>

bool is_anagram(std::string s1, std::string s2)
{
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    return s1 == s2;
}
