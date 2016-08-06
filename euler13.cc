/*

Original text description of the problem

*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "include/myInteger.h"
#include "include/largeInt.h"

void myadd(std::vector<std::string> &lines, int ipos, int i_carry_over) {
	int sum = 0;
	for (int i = 0; i < 100; ++i) {
		std::string cur_line = lines[i];
		int value = cur_line.at(ipos) - '0';
		sum += value;
	}
	sum += i_carry_over;
	int new_carry_over = sum/10;
	
	if (ipos == 0 ) {
		std::cout << std::endl << new_carry_over;
	} else {
		myadd(lines, ipos - 1, new_carry_over);
	}
	
	std::cout << sum % 10;
}

int main () {

    std::cout << "This is Problem 013 ... " << std::endl;

	std::ifstream infile;
	std::vector<std::string> lines;
	std::string line;
	
	infile.open("Data/problem13.txt");
	if (infile.is_open()) {
		std::cout << "Opened file ... " << std::endl;
		
		while ( getline (infile, line) ) {
			std::cout << line << std::endl;
			lines.push_back(line);
		}
		
		myadd(lines, 49, 0);
		
	} else {
		return 1;
	}
	
	infile.close();
    return 0;

}