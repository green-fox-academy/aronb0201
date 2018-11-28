//
// Created by Titkos on 22/11/2018.
//
#include <gtest/gtest.h>
#include "anagram.h"

TEST(test_anagram, test_is_anagram){
    std::string s1 = "valami";
    std::string s2 = "valami";
    ASSERT_EQ(is_anagram( s1, s2), true);
}
