#include <iostream>

#include "StandardDeck.h"


int main()
{
	StandardDeck* deck = new StandardDeck();

    std::cout << deck->to_string() << std::endl;
}


