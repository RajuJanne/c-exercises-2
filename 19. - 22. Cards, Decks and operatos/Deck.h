#pragma once

class Deck {
private:
	std::deque<Card> Cards;
	std::deque<Card> Dealt;
public:
	Deck();
public:
	int size();
	Card deal();
};