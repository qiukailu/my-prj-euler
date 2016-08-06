#include "include/prime_gen.h"

#include <iostream>

int is_prime(int ivalue) {
    if (ivalue <= 0) {
        std::cout << "Non-positive integer input for prime checking ... " << std::endl;
        return 0;
    }
    if (ivalue == 2) return 1;
    int divider = 2;
    if ( ivalue % divider == 0 ) return 0;
    while (divider * divider < ivalue) {
        divider ++;
        if (ivalue % divider == 0 ) return 0;
    }
    return 1;
}

int is_prime_num(int value) {
    return is_prime(value);
}

