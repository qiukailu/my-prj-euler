#include <iostream>

//int prime_counter = 0;
#include "include/prime_gen.h"
//
//int is_prime(int ivalue) {
//    if (ivalue == 2) return 1;
//    int divider = 2;
//    if ( ivalue % divider == 0 ) return 0;
//    while (divider * divider < ivalue) {
//        divider ++;
//        if (ivalue % divider == 0 ) return 0;
//    }
//    return 1;
//}

int main () {

    std::cout << "This is Problem 7 ... " << std::endl;

//    int value = 2;

//    std::cout << value << " -- " << is_prime(value) << std::endl;

    int prime_counter = 0;

    int value = 2;

    while (1) {
        if (is_prime(value)) prime_counter++;
        if (prime_counter == 10001) break;
        value++;
    }

    std::cout << "Number: " << value << std::endl;

    return 0;

}
