#include <iostream>
#include "HumanPlayer.hpp"
using namespace std;

void HumanPlayer::setSumHuman()
{
	int input = 1;
	int cnt = 0;
	sumInHands = 0;
	cout << "Choose 0 - 3 coins between 1, 2 and 5 for the first hand (0 to stop): " << endl;
	while (input != 0 && cnt < 3)
	{
		cin >> input;
		if (input == 0 || input == 1 || input == 2 || input == 5)
		{
			sumInHands += input;
			cnt++;
		}
		else
		{
			cout << "Wrong number. Try again. " << endl;
		}
	}
	input = 1;
	cnt = 0;
	cout << "Choose 0 - 3 coins between 1, 2 and 5 for the second hand (0 to stop): " << endl;
	while (input != 0 && cnt < 3) {
		cin >> input;
		if (input == 0 || input == 1 || input == 2 || input == 5)
		{
			sumInHands += input;
			cnt++;
		}
		else
		{
			cout << "Wrong number. Try again. " << endl;
		}
	}
}

int HumanPlayer::guessHuman()
{
	int guess;
	cout << "Human guess: ";
	cin >> guess;
	return guess;
}

