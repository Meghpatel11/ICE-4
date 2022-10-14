#include "StandardDeck.h"

#include <sstream>
#include <iomanip>
#include <iostream>


StandardDeck::StandardDeck()
{
	Initialize();
}

StandardDeck::~StandardDeck()
= default;

void StandardDeck::Initialize()
{
	// if there are cards in the collection, then clear them
	
	// build the cards collection

	// hints: use one or more loops to do this

	for (int suit = 0; suit < PlayingCard::SUITS; ++suit)
	{
		for (int rank = 0; rank <= PlayingCard::RANKS; ++rank)
		{

			if(rank == 0)
			{
				continue;
			}

			m_pCards.push_front(new PlayingCard(PlayingCard::CARD_RANK[rank], PlayingCard::CARD_SUIT[suit], rank, true));
		}
	}
}

std::string StandardDeck::to_string() const
{
	std::stringstream stream;

	for (const auto card : m_pCards)
	{
		stream << card->to_string() << std::endl;
	}

	return stream.str();
}
