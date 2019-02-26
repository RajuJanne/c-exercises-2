/*
	Janne Rajuvaara
	NTK17SP

	19.	Declare a class that represents a playing card (French playing card).
	20.	Overload operators == and > for the Card class in a way that seems appropriate.
	21.	Overloading operator ++ is a bit tricky but try to do it for the Card-class. If you manage to do it, you earn 2 extra points totaling in three points.
	22.	Declare a class that represents a deck of cards. A deck consists of 52 cards (4 suits and 13 numbers). You have to be able to at least deal cards from the deck.

	*/

#include "pch.h"

int main()
{
	Card card1;
	card1.set_value(7, 4);
	std::cout << "Created card: " << card1.ToString() << std::endl;

	Card card2;
	card2.set_value(13, 2);
	std::cout << "Created card: " << card2.ToString() << std::endl;

	std::cout << "First card is greater? " << ((card1 > card2) ? "true." : "false.") << std::endl;

	Card card3;
	card3.set_value(13, 2);
	std::cout << "Created card: " << card3.ToString() << std::endl;
	//card3.set_value(13, 3);
	std::cout << "Second == third? " << ((card2 == card3) ? "true." : "false.") << std::endl;
	std::cout << "Third card is greater? " << ((card3 > card2) ? "true." : "false.") << std::endl;

	std::cout << "Attempting to increment first card..." << std::endl;
	card1++;
	std::cout << "First card is now: " << card1.ToString() << std::endl;

	std::cout << "Attempting to increment second card (should overflow to the ace of the next suit)..." << std::endl;
	card2++;
	std::cout << "Second card is now: " << card2.ToString() << std::endl;

	std::cout << "Testing both increments..." << std::endl;

	Card i;
	i.set_value(1, 4);

	std::cout << "prefix" << std::endl;

	while (true) {
		if (!(i == card1)) {
			++i;
			std::cout << i.ToString() << std::endl;
		}

		else break;
	}
	std::cout << "postfix" << std::endl;
	i.set_value(1, 1);

	while (true) {
		if (!(i == card1)) {
			i++;
			std::cout << i.ToString() << std::endl;
		}

		else break;
	}

	std::cout << "\nInitializing a new ordered deck..." << std::endl;
	Deck deck;
	std::cout << "Deck has " << deck.size() << " cards." << std::endl;
	Card card4 = deck.deal();
	std::cout << "Dealing the top card: " << card4.ToString() << std::endl;
	std::cout << "Deck has " << deck.size() << " cards." << std::endl;

	Card card5 = deck.deal();
	std::cout << "Dealing the top card: " << card5.ToString() << std::endl;
	std::cout << "Deck has " << deck.size() << " cards." << std::endl;

	return 0;
}