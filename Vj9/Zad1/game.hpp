#pragma once
#include <iostream>
#include <vector>
#include "player.hpp"
using namespace std;

class Game
{
	bool gameOver = false;
public:
	void setGameOver();
	bool getGameOver();
	bool gameProgress(int playerPoints);
	bool checkGuess(int sum, int guess);
};