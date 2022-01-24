#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Player
{
	int points = 0;
	int sumInHands = 0;
public:
	int getPoints();
	void increasePoints();
	int getSumInHands();
	void setSumInHands(int add);
	virtual void selectCoins() = 0;
	virtual int guessSum() = 0;
};

class HumanPlayer : public Player
{
public:
	void selectCoins();
	int guessSum();
};

class ComputerPlayer : public Player
{
public:
	void selectCoins();
	int guessSum();
};