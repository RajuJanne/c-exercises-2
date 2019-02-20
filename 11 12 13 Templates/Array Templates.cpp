#include "pch.h"
#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;
using std::cin;

template <class T>
bool isInArr(T array[], int len, T val) {
	for (int i = 0; i < len; i++)
	{
		if (array[i] == val) return true;
	}
	return false;
}

template <class U, class V>
U indexFind(V arr[], int len, V val, bool getIndex) {

	if (!getIndex) {
		return isInArr(arr, len, val);
	}

	else {
		for (int i = 0; i < len; i++) {
			if (arr[i] == val) {
				return i;
			}
		}
		return -1;
	}
}