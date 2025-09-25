#include "deck.h"

int main()
{

	const Deck deckOriginal;
	Deck deckShuffle;
	int count = 0;

	std::cout << "Initial:\n";
	deckShuffle.print();

	deckShuffle.shufflePerfect();
	deckShuffle.print();

	deckShuffle.shufflePerfect();
	++count;
	std::cout << "\nFirst Perfect Shuffle:\n";
	deckShuffle.print();

	while (!deckShuffle.equals(deckOriginal))
	{
		deckShuffle.shufflePerfect();
		++count;
	}

	std::cout << "\nFinal Perfect Shuffle:\n";
	deckShuffle.print();
	std::cout << "\nTook " << count << " perfect shuffles to return to the original order.\n";

	return 0;
}