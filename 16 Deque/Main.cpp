#include "pch.h"
#include <iostream>
#include <string>
#include <array>

int main()
{
	CharDeque cdq1;
	char chars[] = { 'a','b','c','d', 'e' };

	std::cout << "Deque size is: " << std::to_string(cdq1.get_msize()) << std::endl;

	for (int i = 0; i < 4; i++) {
		try {
			cdq1.push_b(chars[i]);
			//cdq1.push_f(chars[i]);
			cdq1.print();
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	cdq1.set_MaxSize(5);
	std::cout << "new max size is: " << std::to_string(cdq1.get_msize()) << std::endl;


	for (int i = 3; i < 5; i++) {
		try {
			cdq1.push_b(chars[i]);
			//cdq1.push_f(chars[i]);
			cdq1.print();
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "Deque size is: " << std::to_string(cdq1.get_msize()) << std::endl;

	try {
		cdq1.set_MaxSize(-5);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 6; i++) {
		try {
			cdq1.pop_b();
			//cdq1.pop_f();
			cdq1.print();
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}
