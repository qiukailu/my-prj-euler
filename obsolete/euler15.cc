#include<iostream>
#include<vector>
#include<math.h>
#include <stdint.h>

/*
	This problem is equivalent to selecting 20 items out of 40 items.
*/

uint64_t my_fac(uint64_t x) {
	return ( x ==1 ? x : x * my_fac(x - 1) );
}

int main() {
	
	uint64_t sum = 1;
	for(int i = 1; i <= 20 ; ++i ) {
		sum *= (20 + i);
		sum /= i;
	}
	
	std::cout << sum << std::endl;
	
	return 0;
}