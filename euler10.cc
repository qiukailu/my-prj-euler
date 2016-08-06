/*
Summation of primes

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <iostream>

#include "include/myInteger.h"

int main () {

    std::cout << "This is Problem 10 ... " << std::endl;

    uint64_t sum = 0;

    for (uint64_t i = 1; i <= 2000000; ++i) {
        myInt * mint = new myInt(i);
        if ( mint->value() <=0 ) {
            std::cout << "Integer overflows" << std::endl;
        }
        if (mint->is_prime()) {
            sum += mint->value();
        }
        delete mint;
    }

    std::cout << "Sum:" << sum << std::endl;

    return 0;

}
