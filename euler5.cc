// Problem 5

#include <iostream>

int main() {
    std::cout << "This is Problem No. 5 ... " << std::endl;
    int prime[] = {2,3,5,7,11,13,17,19};
    int size_prime = sizeof(prime) / sizeof(int);
    std::cout << "Size of prime: " << size_prime << std::endl;
    int value = 1;
    for (int i = 0; i < size_prime; i++ ) {
        value *= prime[i];
    }
    // multiply by the minimum factors needed to get all numbers [2, 20]
    value = value * 2 * 2 * 3 * 2;
    std::cout << "Value -- " << value << std::endl;

    for (int i = 1; i <= 20; i++) {
        std::cout << value << " mod " << i << " = " << value%i << std::endl;
    }
}
