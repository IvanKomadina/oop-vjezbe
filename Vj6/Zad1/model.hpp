#pragma once
#include <string>
#include <fstream>
using namespace std;

class HangmanModel 
{
	string movie;
	string guessMovie;
	string unusedLetters;
	int lives = 8;
	bool inGame;
public:
	HangmanModel();
	string getMovie();
	string getGuessMovie();
	string getUnusedLetters();
	int getLives();
	bool getInGame();
	void setGuessMovie(string& guessMovie);
	void setUnusedLetters(string& unusedLetters);
	void setLives();
	void setInGame(bool inGame);
};
