//
// Created by Titkos on 22/11/2018.
//

#include <gtest/gtest.h>
#include "apple.h"
TEST(test_apple, test_getApple){
    ASSERT_EQ(getApple(), "apple2");
}