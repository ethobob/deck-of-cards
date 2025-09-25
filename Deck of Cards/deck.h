#ifndef DECK_H
#define DECK_H

#include "card.h"

class Deck
{

public:
	Deck();
	void shufflePerfect();
	bool equals(const Deck& otherDeck)const;
	void print()const;
	
private:
	void initializeDeck();

	static constexpr int SUITS = 4;
	static constexpr int RANKS = 13;
	static constexpr int SIZE = 52;

	Card deckOfCards[SIZE];

};

#endif
