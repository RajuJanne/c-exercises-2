/*
	Janne Rajuvaara - NTK17SP
	18.	Code a class to hold an infinite number of structs in a queue. Keep the struct simple because the point of this exercise is not the complexity of the struct. Make a header file, cpp
	file and a main file to test the queue. The queue must include member functions empty, size, pop and push.
*/

#include "pch.h"
#include <iostream>

int main()
{
	Storage box;

	std::cout << "The queue is empty?: " << (box.empty() ? "true" : "false") << std::endl;

	for (int i = 0; i < 1000000; i++) {
		Item item { i };
		box.push(item);
	}
	std::cout << "Size of the queue is: " << box.size() << std::endl;
	std::cout << "The queue is empty?: " << (box.empty() ? "true" : "false") << std::endl;

	box.pop();
	std::cout << "Size of the queue is: " << box.size() << std::endl;

}

