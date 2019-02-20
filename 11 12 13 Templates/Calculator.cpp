#include "pch.h"
#include <iostream>
#include <typeinfo>
#include <string>

using std::cout;
using std::endl;
using std::cin;

template<class T>
T add(T a, T b) {
	return a + b;
}

template<class T>
T deduct(T a, T b) {
	return a - b;
}

template<class T>
T multi(T a, T b) {
	return a * b;
}

template<class T>
T division(T a, T b) {
	return a / b;
}

template<class T>
T calc(T a, char sign, T b) {

		if (sign == '+') return add(a, b);
		if (sign == '-') return deduct(a, b);
		if (sign == '*') return multi(a, b);
		if (sign == '/') return division(a, b);
		return -0; // real error codes are for those who know how to code
}

template <class T>
void print(T output) {
	cout << std::to_string(output) << endl;
}