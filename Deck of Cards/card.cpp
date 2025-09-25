#include "card.h"

Card::Card()
	: Card(1, 1)
{ }

Card::Card(const int suit, const int rank)
	: m_suit(static_cast<Suit>(suit)), m_rank(static_cast<Rank>(rank))
{ }

bool Card::equals(const Card& otherCard)const
{
	return m_suit == otherCard.m_suit && m_rank == otherCard.m_rank;
}

void Card::print()const
{
	switch (m_rank)
	{
	case Ace:
		std::cout << "A";
		break;
	case Jack:
		std::cout << "J";
		break;
	case Queen:
		std::cout << "Q";
		break;
	case King:
		std::cout << "K";
		break;
	default:
		std::cout << m_rank;
	}

	switch (m_suit)
	{
	case Clubs:
		std::cout << "C";
		break;
	case Diamonds:
		std::cout << "D";
		break;
	case Hearts:
		std::cout << "H";
		break;
	case Spades:
		std::cout << "S";
		break;
	}
}