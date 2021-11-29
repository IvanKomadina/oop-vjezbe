#include "model.hpp"
#include "controller.hpp"
#include "view.hpp"
#include <iostream>
#include <string>
using namespace std;

void HangmanView::displayCurrentProgress(HangmanModel& model) 
{
	if (model.getGuessMovie() == model.getMovie())
	{
		cout << endl << "YOU WON!" << endl;
	}
	else if (model.getLives() == 0) 
	{
		cout << endl << endl << "YOU LOST!" << endl;
	}
	else 
	{
		cout << endl << "Enter letter:  ";
	}
}

void HangmanView::displayUnusedLetters(HangmanModel& model)
{
	cout << "Guess movie: " << model.getGuessMovie() << endl << endl;
	cout << "Unused letters:" << model.getUnusedLetters() << endl << endl;
}

void HangmanView::displayHangman(HangmanModel& model) 
{
	int lives = model.getLives();
	if (lives == 8)
	{
		cout << "________" << endl;
		cout << "| /" << endl;
		cout << "|/" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______" << endl;
	}
	else if (lives == 7)
	{
		cout << "________" << endl;
		cout << "| /  |" << endl;
		cout << "|/" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______" << endl;
	}
	else if (lives == 6)
	{
		cout << "________" << endl;
		cout << "| /  |" << endl;
		cout << "|/   O" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______" << endl;
	}
	else if (lives == 5)
	{
		cout << "________" << endl;
		cout << "| /  |" << endl;
		cout << "|/   O" << endl;
		cout << "|    |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______" << endl;
	}
	else if (lives == 4)
	{
		cout << "________" << endl;
		cout << "| /  |" << endl;
		cout << "|/   O" << endl;
		cout << "|   /|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______" << endl;
	}
	else if (lives == 3)
	{
		cout << "________" << endl;
		cout << "| /  |" << endl;
		cout << "|/   O" << endl;
		cout << "|   /|\\" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______" << endl;
	}
	else if (lives == 2)
	{
		cout << "________" << endl;
		cout << "| /  |" << endl;
		cout << "|/   O" << endl;
		cout << "|   /|\\" << endl;
		cout << "|    |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______" << endl;
	}
	else if (lives == 1)
	{
		cout << "________" << endl;
		cout << "| /  |" << endl;
		cout << "|/   O" << endl;
		cout << "|   /|\\" << endl;
		cout << "|    |" << endl;
		cout << "|   /" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______" << endl;
	}
	else if (lives == 0)
	{
		cout << "________" << endl;
		cout << "| /  |" << endl;
		cout << "|/   O" << endl;
		cout << "|   /|\\" << endl;
		cout << "|    |" << endl;
		cout << "|   / \\" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______" << endl << endl;
	}
}
