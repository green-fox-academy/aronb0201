//
// Created by Titkos on 22/11/2018.
//

#include <gtest/gtest.h>
#include "apple.h"
#include "vector"
TEST(test_apple, test_getApple){
    ASSERT_EQ(getApple(), "apple2");
}


TEST(test_apple, test_sum){
    std::vector<int> elements = {3,4,5};
    ASSERT_EQ(sum(elements),12 );
    
}