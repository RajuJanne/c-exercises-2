#include "pch.h"

Deck::Deck()
{
	Card card;
	card.set_value(1, 1);
	for (int i = 0; i < 52; i++) {
		Cards.push_back(card);
		card++;
	}
}

int Deck::size()
{
	return Cards.size();
}

Card Deck::deal()
{
	Card ret = Cards.back();
	Dealt.push_back(ret);
	Cards.pop_back();
	return ret;
}
