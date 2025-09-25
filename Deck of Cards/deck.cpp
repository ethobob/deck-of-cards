#include "deck.h"

Deck::Deck()
{
	initializeDeck();
}

void Deck::initializeDeck()
{
	for (int i = 0; i < SUITS; i++)
	{
		for (int j = 0; j < RANKS; j++)
		{
			const int index = (i * RANKS) + j;
			deckOfCards[index] = Card(i + 1, j + 1);
		}
	}
}

void Deck::shufflePerfect()
{
	Card newDeck[SIZE];
	for (int i = 0; i < SIZE / 2; i++)
	{
		newDeck[i * 2] = deckOfCards[i];
		newDeck[i * 2 + 1] = deckOfCards[i + (SIZE / 2)];
	}

	for (int i = 0; i < SIZE; i++)
		deckOfCards[i] = newDeck[i];
}

bool Deck::equals(const Deck& otherDeck)const
{
	for (int i = 0; i < SIZE; i++)
		if (!deckOfCards[i].equals(otherDeck.deckOfCards[i]))
			return false;
	return true;
}

void Deck::print()const
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << (i + 1) << ". ";
		deckOfCards[i].print();
		std::cout << "\n";
	}
}