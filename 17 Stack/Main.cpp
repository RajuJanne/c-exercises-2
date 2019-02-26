#include "pch.h"
#include <array>
#include <string>

int main() {

	stack words = stack(5);

	std::cout << "Current stack size is: " << std::to_string(words.size()) << std::endl;
	std::cout << "Populating the stack..." << std::endl;
	try {
		for (int i = 0; i < 6; i++) {
			words.push("kekkonen");
			std::cout << "Push succeeded!" << std::endl;
		}
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Current stack size is: " << std::to_string(words.size()) << std::endl;

	std::cout << "Printing the top string in stack: " << words.top() << std::endl;
	
	std::cout << "Culling the stack..." << std::endl;
	try {
		for (int i = 0; i < 6; i++) {
			words.pop();
			std::cout << "Pop succeeded!" << std::endl;
		}
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Current stack size is: " << std::to_string(words.size()) << std::endl;

	std::cout << "...\nEnd of demonstration." << std::endl;

	return 0;
}