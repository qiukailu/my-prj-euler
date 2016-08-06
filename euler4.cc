
// A palindromic number reads the same both ways.
// The largest palindrome made from the product of
// two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

#include<iostream>
#include<vector>

#include "include/myInteger.h"

int main () {
  std::cout << "Problem 4: \n";

  myInt mint(1234554321);

  mint.print();

  std::cout << mint.reverse_itself() << std::endl;

  std::cout << mint.check_palindrome() << std::endl;

  int maxint = 0;

  int ii = 0;
  int jj = 0;

  for (int i = 100; i <= 999; i++ ) {
    for (int j = 100; j <= 999; j++) {
        myInt mint(i*j);
        if (mint.check_palindrome()) {
            if (i*j > maxint) {
                maxint = i*j;
                ii = i;
                jj = j;
            }
        }
    }
  }

  std::cout << "max int: " << maxint << std::endl;
  std::cout << "ii     : " << ii     << std::endl;
  std::cout << "jj     : " << jj     << std::endl;


  return 0;
}
