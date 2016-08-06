#ifndef _MYINT_H_
#define _MYINT_H_

#include <iostream>
#include <vector>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>
#include "include/prime_gen.h"
// extended integer class
class myInt {
  public:

    myInt ();

    myInt(uint64_t in);

    ~myInt ();
    
    void fill_in_primes(int n);

    void setValue(uint64_t in);

    uint64_t value();

    int num_divisors();

    void print();

    // check if number is palindrome.
    // return 0 if not, 1 otherwise
    int check_palindrome();

    int is_prime();

    int is_divisor(int value);

    void calc_prime_divisors();

    uint64_t reverse_itself();

  private:
    uint64_t m_data;
    std::vector<int> m_prime_vec;
    std::vector<int> m_prime_divisors;
    std::vector<int> m_prime_exp;
};

typedef class myInt * pSuperInt;

#endif // _MYINT_H_
