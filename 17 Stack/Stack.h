#pragma once
/*
17.	Code a class to hold a predefined number of strings in a stack. Make a header file, cpp file and a main file to test the stack. The stack must include member functions empty, size, pop and push. StackExercise.
*/
#include <iostream>
#include <vector>
#include <string>

class stack{
private:
	std::vector<std::string> container;
	int m_size;
	int m_maxSize;
public: // constructor
	// must be initialized with maximum size parameter (int)
	stack(int i) {
		container.empty();
		m_size = 0;
		m_maxSize = i;
	}
public: // stack methods
	void empty();
	int size();
	void pop();
	void push(std::string);
	std::string top();
};