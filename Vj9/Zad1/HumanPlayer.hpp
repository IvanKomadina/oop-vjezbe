#pragma once
#include <iostream>
#include "player.hpp"

class HumanPlayer : public Player
{
public:
	void setSumHuman();
	int guessHuman();
};