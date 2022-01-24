#include <iostream>
#include <ctime>
#include "player.hpp"
using namespace std;

int Player::getPoints()
{
	return points;
}

void Player::increasePoints()
{
	points++;
}

int Player::getSumInHands()
{
	return sumInHands;
}

void Player::setSumInHands(int add)
{
	sumInHands += add;
}

void HumanPlayer::selectCoins()
{
	int input = 1;
	int cnt = 0;
	cout << "Choose 0 - 3 coins between 1, 2 and 5 for the first hand (0 to stop): " << endl;
	while (input != 0 && cnt < 3)
	{
		cin >> input;
		if (input == 0 || input == 1 || input == 2 || input == 5)
		{
			setSumInHands(input);
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
			setSumInHands(input);
			cnt++;
		}
		else
		{
			cout << "Wrong number. Try again. " << endl;
		}
	}
}

int HumanPlayer::guessSum()
{
	int guess;
	cout << "Human guess: ";
	cin >> guess;
	return guess;
}

void ComputerPlayer::selectCoins()
{
	srand(time(NULL));
	int random;
	random = rand() % 31;
	setSumInHands(random);
}

int ComputerPlayer::guessSum()
{
	srand(time(NULL));
	int guess;
	guess = rand() % 31;
	cout << "Computer guess: " << guess << endl;
	return guess;
}