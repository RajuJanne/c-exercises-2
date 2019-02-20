#pragma once
#include <deque>

class CharDeque {
private:
	int m_Size = 0;
	int m_MaxSize = 3;
	std::deque<char> dq = {};
public:
	void push_f(char);
	void push_b(char);
	void pop_f();
	void pop_b();
public:
	std::deque<char> get_dq();
	int get_size();
	int get_msize();
public:
	void set_MaxSize(int);
public:
	void print();
};