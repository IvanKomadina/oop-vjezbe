#pragma once
#include <iostream>
#include <string>
#include "model.hpp"

class HangmanView 
{
public:
	void displayCurrentProgress(HangmanModel& model);
	void displayUnusedLetters(HangmanModel& model);
	void displayHangman(HangmanModel& model);
};