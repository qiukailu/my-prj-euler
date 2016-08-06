#include <iostream>

int main () {

    std::cout << "This is Problem 6 ... " << std::endl;

    int value1 = 0;
    int value2 = 0;

    for (int i = 1; i <= 100; ++i) {
        value1 += i*i;
        value2 += i;
    }
    value2 = value2 * value2;
    std::cout << value2 - value1 << std::endl;

    return 0;
}
