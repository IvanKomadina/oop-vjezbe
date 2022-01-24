#include <iostream>
#include <ctime>
#include <vector>
#include "game.hpp"
#include "player.hpp"
using namespace std;

int main()
{
	int guess;
	Game g;
	int humanPlayers, computerPlayers;
	cout << "Enter the number of human players: ";
	cin >> humanPlayers;
	cout << "Enter the number of computer players: ";
	cin >> computerPlayers;

	int totalPlayers = humanPlayers + computerPlayers;

	vector<Player*> player;

	for (int i = 0; i < totalPlayers; i++) {
		if (i < humanPlayers) {
			player.push_back(new HumanPlayer);
		}
		else {
			player.push_back(new ComputerPlayer);
		}
	}


	while (g.getGameOver() == 0)
	{
		for (auto el : player)
		{
			el->selectCoins();
		}

		for (int i = 0; i < totalPlayers; i++)
		{
			for (int j = 0; j < totalPlayers; j++)
			{
				if (i != j)
				{
					if (g.checkGuess(player[j]->getSumInHands(), player[i]->guessSum()))
					{
						player[i]->increasePoints();
						g.gameProgress(player[i]->getPoints());
					}
				}
			}
		}
	}
}