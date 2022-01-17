#include <iostream>
#include "game.hpp"
using namespace std;

bool Game::gameProgress(int humanPoints, int computerPoints)
{
	if (humanPoints >= 2)
	{
		cout << "Player won! " << endl;
		return 0;
	}
	else if (computerPoints >= 2)
	{
		cout << "Computer won! " << endl;
		return 0;
	}
	else
		return 1;
}

void Game::displayScore(int humanPoints, int computerPoints)
{
	cout << "Player score: " << humanPoints << endl;
	cout << "Computer score: " << computerPoints << endl;
}

bool Game::checkGuess(int sum, int guess)
{
	return (sum == guess);
}

void Game::increasePoints(int& points)
{
	points++;
}