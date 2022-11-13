#include "createHi.h"
#include <gtest/gtest.h>

TEST(createHi, names) {
    EXPECT_EQ(createHi("Danya"), "Hi Danya");
}

int main()
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
