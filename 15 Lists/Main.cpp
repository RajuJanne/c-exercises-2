/*
	Janne Rajuvaara - NTK17SP
	15.	Make two lists of strings. Then make a third list which gets the contents of the two lists in sequential order one item at a time from both lists in turn.
	As a last action, remove all the duplicates from the third list. A duplicate means that there are at least two elements which have the same value (in the example “def” is such a value).
	[dunno if I should just use .sort() .unique() ...]
*/

#include "pch.h"
#include <iostream>
#include <list>
#include <iterator>
#include <stdlib.h>
#include <string>

int main()
{
	std::list<std::string> first = { "abc", "def", "ghi" };
	std::list<std::string> second = { "123", "def", "456" };

	std::list<std::string> combined;

	while (!first.empty()) {
		combined.push_back(first.front());
		combined.push_back(second.front());

		first.pop_front();
		second.pop_front();
	}
	std::cout << "Combined string vectors:" << std::endl;
	for (std::string str : combined)
	{
		std::cout << str;
	}
	std::cout << std::endl;

	std::cout << "Removing duplicates using the sort and unique methods:" << std::endl;
	// sorting and removing duplicates, should sorting be allowed in this case.
	combined.sort();
	combined.unique();

	for (std::string str : combined) {
		std::cout << str;
	}
	std::cout << std::endl;

	// let's see if we can do the same with iterators somehow.

	combined = { "abc","123","def","def","ghi","456" }; // just resetting this manually
	std::list<std::string>::iterator apple = combined.begin();

	// we're comparing apples and oranges in this loop
	while (apple != combined.end()) {
		// first we set orange to point to the following item after apple
		std::list<std::string>::iterator orange = apple;
		std::advance(orange, 1);

		while (orange != combined.end()) {
			if (*apple == *orange) {
				combined.erase(orange);
			}
			std::advance(orange, 1);
		}
		std::advance(apple, 1);
	}
	std::cout << "Removing duplicates using iterators:" << std::endl;
	for (std::string str : combined) {
		std::cout << str;
	}
	std::cout << std::endl;

	return 0;
}