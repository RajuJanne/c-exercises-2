#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>

std::string suitcase (suit s) {
	switch (s) {
	case 1:
		return "Hearts";
	case 2:
		return "Spades";
	case 3:
		return "Diamonds";
	case 4:
		return "Clubs";
	default:
		throw std::exception("Mitä vittua juuri tapahtui?!");
	}
}

void Card::set_value(int val, int suit) {
	if (val >= 1 && val <= 13) {
		m_value = val;
	}
	else {
		throw std::exception("Arvon oltava välillä 1 - 13.");
	}
	if (suit >= 1 && suit <= 4) {
		m_suit = suit;
	}
	else {
		throw std::exception("Maan oltava välillä 1 - 4.");
	}
}

int Card::get_value() {
	return m_value;
}

int Card::get_suit()
{
	return m_suit;
}

std::string Card::ToString() {
	std::stringstream retval;
	retval << std::to_string(m_value) << " of " << suitcase(suit(m_suit));
	return retval.str();
}

bool Card::operator== (const Card & rhs) const {
	if (m_value == rhs.m_value && m_suit == rhs.m_suit) {
		return true;
	}
	else { return false; }
}

bool Card::operator>(const Card & rhs) const
{
	if (m_value > rhs.m_value) {
		return true;
	}
	else if (m_value == rhs.m_value && m_value < rhs.m_suit) {
		return true;
	}
	else {
		return false;
	}
}

Card & Card::operator++()
{
	if (m_value < 13) {
		m_value++;
	}
	else if (m_suit > 1) {
		m_value = 1;
		m_suit = m_suit - 1;
	}
	else {
		m_value = 1;
		m_suit = 4;
	}
	return *this;
}

Card Card::operator++(int)
{
	Card temp = *this;
	++*this;
	return temp;
}

//bool operator==(const Card & lhs, const Card & rhs) const
//{
//	if (lhs.m_value == rhs.m_value && lhs.m_suit == rhs.m_suit) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//const int operator>(const Card & lhs, const Card & rhs) const
//{
//	if (lhs.m_value > rhs.m_value) {
//		return true;
//	}
//	// smaller suit index is more powerful than a larger suit index, quirk of bad planning and lack of effort to reiterate code.
//	else if (lhs.m_value == rhs.m_value && lhs.m_suit < rhs.m_suit) {
//		return true;
//	}
//	else { return false; }
//}



