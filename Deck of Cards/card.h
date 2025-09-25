#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

class Card
{

public:
	enum Suit { Clubs = 1, Diamonds, Hearts, Spades };
	enum Rank { Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };

	Card();
	Card(const int suit, const int rank);
	bool equals(const Card& otherCard)const;
	void print()const;

private:
	Suit m_suit;
	Rank m_rank;

};

#endif
