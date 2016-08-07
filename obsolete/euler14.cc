#include<iostream>
#include<vector>

#include "include/myInteger.h"

class Collatz {
	
	/// constainer storing list of ints in the sequence
	std::vector<uint64_t> m_vec_longs;
	
	/// disable default ctor
	Collatz() {
		
	}
	
	public:
	
	
	Collatz(uint64_t in_start) {
		m_vec_longs.clear();
		m_vec_longs.push_back(in_start);
	}
	
	void computeSequence() {
		
		//std::cout << m_vec_longs[0];
		
		uint64_t nn = this->next_num(m_vec_longs[0]);
		
		while (nn != 0) {
			//std::cout << " -> " << nn;
			m_vec_longs.push_back(nn);
			uint64_t newnn = this->next_num(nn);
			nn = newnn;
		}
		
		
	}
	
	int getTotalNumber() {
		return m_vec_longs.size();
	}
	
	private:
	
	uint64_t next_num(uint64_t n) {
		
		if (n < 0) {
			std::cout << "Integer overflowed !!!!" << std::endl;
			return 0;
		}
		
		if (n % 2 == 0) { // n is even
			return (n / 2);
		} else { // n is odd
			if ( n == 1 ) { // end of sequence
			    return 0;
			} else {
				return (3 * n + 1);
			}
		}
	}
};

int main() {
    std::cout << "This is Problem 14" << std::endl;
	
	uint64_t start_number = 2;
	uint64_t max_tot_num = 0;
	Collatz *col;
	
	for (uint64_t i = 2; i <= 1000000 ; ++i) {
		
		if ( i % 1000 == 0) {
			std::cout << "Processing " << i << " ... ... " << std::endl;
		}
		
		uint64_t cur_tot_num;
		col=new Collatz(i);
		col->computeSequence();
		cur_tot_num = col->getTotalNumber();
		if (cur_tot_num > max_tot_num) {
			max_tot_num = cur_tot_num;
			start_number = i;
		}
		
	}
	
	std::cout << std::endl << "Starting number: " << start_number << std::endl
	                       << "Max tot num:     " << max_tot_num;
	
	
	delete col;
	
	return 0;
}
