#include <iostream>

#include "PlayingCard.h"

int main()
{
	PlayingCard* card = new PlayingCard("Ace", "Spades", 1, false);

	card->FlipCard();

    std::cout << *card << std::endl;
}


