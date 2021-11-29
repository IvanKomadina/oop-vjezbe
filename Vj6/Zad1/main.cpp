#include <iostream>
#include "model.hpp"
#include "controller.hpp"
#include "view.hpp"
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	HangmanModel hangman;
	HangmanController controller;
	HangmanView view;
	while (controller.checkIfGameIsOver(hangman)) 
	{
		view.displayHangman(hangman);
		cout << endl;
		view.displayUnusedLetters(hangman);
		view.displayCurrentProgress(hangman);
		controller.userEntry(hangman);
		controller.updateLives(hangman);
		system("cls");
	}
	view.displayHangman(hangman);
	cout << endl;
	view.displayUnusedLetters(hangman);
	view.displayCurrentProgress(hangman);
}