#include <iostream>
#include <ctime>
#include "ComputerPlayer.hpp"
using namespace std;

void ComputerPlayer::setSumComputer()
{
	srand(time(NULL));
	int random;
	random = rand() % 31;
	sumInHands = random;
}

int ComputerPlayer::guessComputer()
{
	srand(time(NULL));
	vector <int> v;
	int guess;
	guess = rand() % 31;
	cout << "Computer guess: " << guess << endl;
	return guess;
}