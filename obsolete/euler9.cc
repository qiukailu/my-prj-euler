#include <iostream>

// check if the input triple is a Pythagorean triplet
int check_pythagorean(int a, int b, int c) {

    if ( a * a + b * b == c * c) {
        return 1;
    } else {
        return 0;
    }

}

int main () {

    std::cout << "This is Problem 9 ... " << std::endl;

    std::cout << check_pythagorean(3,4,5);

    int c;  // range of c from 1 to 499;

    int a;  // range from 1 to 500;

    int b;  // b = 1000 - a - c;

    int found = 0;

    for (c = 1; c <= 499; ++c) {
        for (a = 1; a <= 500; ++a) {
            b = 1000 - c - a;
            if (check_pythagorean(a, b, c)) {
                std::cout << "Found the triplet: " << a << ", " << b << ", " << c << std::endl;
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    std::cout << "Found the triplet: " << a << ", " << b << ", " << c << std::endl;
    std::cout << "The product of abc is -- " << a * b * c << std::endl;

    return 0;

}
