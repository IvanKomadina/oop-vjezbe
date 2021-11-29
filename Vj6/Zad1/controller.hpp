#pragma once
#include <iostream>
#include "model.hpp"
#include "view.hpp"
using namespace std;

class HangmanController 
{
public:
	void userEntry(HangmanModel& model);
	void checkLetter(char letter, HangmanModel& model);
	void updateLives(HangmanModel& model);
	bool checkIfGameIsOver(HangmanModel& model);
};