#pragma once

#include <string>

enum suit {
	Hearts = 1, Spades, Diamonds, Clubs
};

//value 1-13, suits 1-4 (hearts, spades, diamonds, clubs)
std::string suitcase(suit s);

class Card {
private:
	int m_value;
	int m_suit;
public: // setter
	void set_value(int val, int suit);
public: // getter
	// % 17 gives you the suit, (int) val/17 gives you the value
	int get_value();
	int get_suit();
public:
	std::string ToString();
public: // overloads
	bool operator== (const Card& rhs) const; // member function
	bool operator> (const Card& rhs) const;

	// https://docs.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=vs-2017
	Card& operator++();
	Card operator++(int);
	//friend bool operator== (const Card & lhs, const Card & rhs) const; // external friend function
	//
	//friend const int operator> (const Card & lhs, const Card & rhs) const;
};