/*
	16.	Code a class that can hold a predefined number of chars in a deque. Make a header file, cpp file and a main file in which you test pushing and popping and possible other methods.	   The deque only supports insertion/deletion at the beginning and end of the deque.
*/

#include "pch.h"
#include <iostream>

/*pushes*/
void CharDeque::push_f(char c) {
	if (m_Size < m_MaxSize) {
		dq.push_front(c);
		m_Size++;
	}
	else {
		throw std::exception("Deque full.");
	}
}

void CharDeque::push_b(char c) {
	if (m_Size < m_MaxSize) {
		dq.push_back(c);
		m_Size++;
	}
	else {
		throw std::exception("Deque full.");
	}
}

/*pops*/
void CharDeque::pop_f() {
	if (m_Size > 0) {
		dq.pop_front();
		m_Size--;
	}
	else {
		throw std::exception("Deque already empty.");
	}
}

void CharDeque::pop_b() {
	if (m_Size > 0) {
		dq.pop_back();
		m_Size--;
	}
	else {
		throw std::exception("Deque already empty.");
	}
}

/*manipulate max size*/
void CharDeque::set_MaxSize(int i) { 
	(i > 0) ? m_MaxSize = i : throw std::exception("The maximum size has to be positive."); 
}

/*get attributes*/
std::deque<char> CharDeque::get_dq() { return dq; }
int CharDeque::get_size() { return m_Size; }
int CharDeque::get_msize() { return m_MaxSize; }

/*print contents*/
void CharDeque::print() {
	//TODO
	std::deque<char> copy = dq;
	int size = get_size();
	for (int i = 0; i < size; i++) {
		std::cout << copy.front();
		copy.pop_front();
	}
	std::cout << std::endl;
}
