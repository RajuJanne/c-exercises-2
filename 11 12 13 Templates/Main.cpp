/*
	Janne Rajuvaara - NTK17SP

	11.	Declare and define a template function that is able to search an array for a value. If the value is found in the array, the function returns true, otherwise false. You need exactly one template parameter.

	12.	Build on the template in the above exercise. Declare and define a template function that returns true or false, if the user just wants to know, if the value is in the array (exactly like the previous one). The same template function should, however, also be able to return the index where the value was found. If the value is not found, then the function returns -1. You need two template parameters. See main.cpp and the usage of typeid.

	13.	Make a calculator template that can perform the basic math operations (+,-,*,/) on integers and doubles.

*/

#include "pch.h"
#include <iostream>
#include <typeinfo>
#include <string>
#include "Calculator.cpp" //tein rumasti
#include "Array Templates.cpp" 

using std::cout;
using std::endl;
using std::cin;

int main() {

	int lista[] = { 0, 1, 2, 3, 4 };

	cout << "ehtitaan onko arrayssa arvo 8: " << (isInArr(lista, 5, 8) ? "joo." : "eip.") << endl;
	cout << "no onko 4? : " << (isInArr(lista, 5, 4) ? "joo." : "eip.") << endl;

	cout << endl;

	int vastaus = indexFind<int>(lista, 5, 7, true); // pitäs palauttaa -1
	int vastaus1 = indexFind<int>(lista, 5, 2, true); // pitäs palauttaa 2

	bool vastaus2 = indexFind<bool>(lista, 5, 7, false); // pitäs palauttaa false
	auto vastaus3 = indexFind<bool>(lista, 5, 2, false); // pitäs palauttaa true

	cout << vastaus << endl;
	cout << vastaus1 << endl;
	cout << endl;
	cout << ((vastaus2) ? "true" : "false") << endl;
	cout << ((vastaus3) ? "true" : "false") << endl;
	cin.get();

	{
		double a = 10, b = 6;

		cout << calc(a, '+', b) << endl;
		cout << calc(a, '-', b) << endl;
		cout << calc(a, '*', b) << endl;
		cout << calc(a, '/', b) << endl;
	}
	cout << endl;
	{
		int a = 10, b = 6;

		cout << calc(a, '+', b) << endl;
		cout << calc(a, '-', b) << endl;
		cout << calc(a, '*', b) << endl;
		cout << calc(a, '/', b) << endl; 

	}

	return 0;
}