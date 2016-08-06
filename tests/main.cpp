#include <gtest/gtest.h>
#include "include/myInteger.h"

TEST (all_my_tests, dummy)
{
    EXPECT_EQ(0, 0);
}

TEST (all_my_tests, myInt1)
{
    EXPECT_EQ(myInt(321).value(), 321);
}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
