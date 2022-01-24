#include <iostream>
#include "game.hpp"
using namespace std;

void Game::setGameOver()
{
	gameOver = true;
}

bool Game::getGameOver()
{
	return gameOver;
}

bool Game::gameProgress(int playerPoints)
{
	if (playerPoints >= 2)
	{
		cout << "Player won! " << endl;
		setGameOver();
		return 0;
	}
	else
		return 1;
}

bool Game::checkGuess(int sum, int guess)
{
	return (sum == guess);
}
