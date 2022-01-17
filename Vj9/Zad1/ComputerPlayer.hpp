#pragma once
#include <iostream>
#include <vector>
#include "player.hpp"
using namespace std;

class ComputerPlayer : public Player
{
public:
	void setSumComputer();
	int guessComputer();
};