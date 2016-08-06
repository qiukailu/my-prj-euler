#include<iostream>
#include<vector>
#include<math.h>
#include <stdint.h>

/*
	In this class, I want to convert integers into a collection of single digits stored
	in a vector of int.
	
	The most significant digit is always in [0] position
*/
class digInt {
	public:
		digInt(int in_digit) {
			m_digits.clear();
			m_digits.push_back(in_digit);
		}
		
		void double_me() {
			int size = m_digits.size();
			int co = 0; // carry over digit
			for (int i = size - 1; i >=0; --i) {
				int me = m_digits[i];
				me = 2 * me + co;
				if (me > 9) {
					co = me/10;
					me = me%10;
				} else {
					co = 0;
				}
				m_digits[i] = me;
			}
			if (co != 0) {
				std::vector<int>::iterator it = m_digits.begin();
				it = m_digits.insert(it, co);
				//m_digits.push_front(co);
			}
		}
		
		int sumDigits(){
			int size = m_digits.size();
			int sum = 0;
			for (int i = 0; i < size; ++i) {
				sum += m_digits[i];
			}
			return sum;
		}
		
		void print() {
			int size = m_digits.size();
			for (int i = 0; i < size; ++i) {
				std::cout << m_digits[i];
			}
			std::cout << std::endl;
		}
		
	private:
		std::vector<int> m_digits;
};

int main() {
	int ipower = 1000;
	digInt a(1);
	
	a.print();
	for (int i = 0; i < ipower; ++i ) {
		a.double_me();
	}
	a.print();
	int sum_d = a.sumDigits();
	std::cout << "Sum of All Digits: " << sum_d << std::endl;
	return 0;
}