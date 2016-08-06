#include <vector>
#include <iostream>
#include <gtest/gtest.h>
#include "include/myInteger.h"
#include "include/mytree.h"

TEST (project_euler, problem1)
{
    uint64_t sum = 0;
    for (int i = 1; i <1000; i++) {
       myInt a(i);
       if ( a.is_divisor(3) || a.is_divisor(5) ) {
           sum += a.value();
       }
    }
    EXPECT_EQ(sum, 233168);
}

TEST (project_euler, problem2)
{
    uint64_t a = 1;
    uint64_t b = 2;
    uint64_t c;
    uint64_t sum = 2;
    while (1) {
        c = a + b;
        myInt mi;
        mi.setValue(c);
        if ( mi.is_divisor(2) ) {
            sum += c;
        }

        if ( c >= 4000000 ) break;

        a = b;
        b = c;
    }

    EXPECT_EQ(sum, 4613732);
}

TEST (project_euler, problem3)
{
    EXPECT_TRUE(myInt(19).is_prime());
    myInt a(600851475143);
    a.print();
    EXPECT_NO_THROW(a.calc_prime_divisors());
}

TEST (project_euler, problem18)
{
    int input[] =
    {75,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     95, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     17, 47, 82,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     18, 35, 87, 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     20,  4, 82, 47, 65,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     19,  1, 23, 75,  3, 34,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     88,  2, 77, 73,  7, 63, 67,  0,  0,  0,  0,  0,  0,  0,  0,
     99, 65,  4, 28,  6, 16, 70, 92,  0,  0,  0,  0,  0,  0,  0,
     41, 41, 26, 56, 83, 40, 80, 70, 33,  0,  0,  0,  0,  0,  0,
     41, 48, 72, 33, 47, 32, 37, 16, 94, 29,  0,  0,  0,  0,  0,
     53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14,  0,  0,  0,  0,
     70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57,  0,  0,  0,
     91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48,  0,  0,
     63, 66,  4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31,  0,
      4, 62, 98, 27, 23,  9, 70, 98, 73, 93, 38, 53, 60,  4, 23};

     int num_int = sizeof(input) / sizeof(int);
     EXPECT_EQ(num_int, 225);

     std::vector<leaf*> leafs;
     for (int i = 0; i < num_int; i++) {
         leaf* aleaf = new leaf(input[i]);
         leafs.push_back(aleaf);
     }
     EXPECT_EQ(leafs.size(), 225);

     for (int i = 0; i < 14; i++ ) {
         for (int j = 0; j < 14; j++ ) {
             leafs[i*15+j]->setLeft (&leafs[(i+1)*15+j]);
             leafs[i*15+j]->setRight(&leafs[(i+1)*15+j+1]);
         }
     }

     EXPECT_EQ(leafs[0]->max_sum(), 1074);
}
