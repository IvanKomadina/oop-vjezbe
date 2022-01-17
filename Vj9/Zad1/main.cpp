#include <iostream>
#include "game.hpp"
#include "HumanPlayer.hpp"
#include "ComputerPlayer.hpp"
using namespace std;

int main()
{
	int guess;
	Game g;
	HumanPlayer h;
	ComputerPlayer c;

	while (g.gameProgress(h.points, c.points))
	{
		g.displayScore(h.points, c.points);
		h.setSumHuman();
		c.setSumComputer();

		while (true)
		{
			guess = h.guessHuman();
			if (g.checkGuess(c.sumInHands, guess))
			{
				cout << "You guessed computer's sum! " << endl;
				g.increasePoints(h.points);
				break;
			}
			guess = c.guessComputer();
			if (g.checkGuess(h.sumInHands, guess))
			{
				cout << "Computer correct guess! " << endl;
				g.increasePoints(c.points);
				break;
			}
		}
	}
}