#pragma once
#ifndef __STANDARD_DECK__
#define __STANDARD_DECK__

#include <deque>

#include "PlayingCard.h"

class StandardDeck
{
public:
	// constructor(s)
	StandardDeck();

	// destructor
	~StandardDeck();

	// get / accessors

	// set / mutators

	// overloaded operators

	// public methods
	void Initialize();

	// overriden methods
	std::string to_string() const;

private:
	// private instance members
	std::deque<PlayingCard*> m_pCards;

	// private utility methods

};

#endif /* defined (__STANDARD_DECK__) */

