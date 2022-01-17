#pragma once
#include <iostream>

class Game
{
public:
	bool gameProgress(int humanPoints, int computerPoints);
	void displayScore(int humanPoints, int computerPoints);
	bool checkGuess(int sum, int guess);
	void increasePoints(int& points);
};