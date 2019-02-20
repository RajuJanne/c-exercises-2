/*
	Janne Rajuvaara - NTK17SP
	14.	Make two vectors: one stores odd numbers and one stores even numbers. Draw random numbers between 0 and 99 and add them to the correct vector.
*/

#include "pch.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

int main() {
	std::vector<int> odds, evens;

	int r = 0;

	for (int i = 0; i < 500; i++)
	{
		r = rand() % 100;
		if (r % 2 == 1) {
			odds.push_back(r);
		}
		else {
			evens.push_back(r);
		}
	}

	std::cout << "Number of odds: " << std::to_string(odds.size()) << ". The first value is: " << std::to_string(odds.front()) << std::endl;
	std::cout << "Number of evens: " << std::to_string(evens.size()) << ". The first value is: " << std::to_string(evens.front()) << std::endl;
	return 0;
}