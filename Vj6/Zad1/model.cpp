#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "model.hpp"
using namespace std;

HangmanModel::HangmanModel() 
{
	int random, numberOfMovies, numOflettersInMovie;
	ifstream file("movies.txt");
	vector<string> vect;
	string letter;

	while (getline(file, movie))
	{
		vect.push_back(movie);
	}

	numberOfMovies = vect.size();
	random = rand() % numberOfMovies;

	movie = vect[random];
	numOflettersInMovie = movie.size();

	for (int i = 0; i < numOflettersInMovie; i++) 
	{
		if (ispunct(movie[i]) || isdigit(movie[i])) 
		{
			movie.erase(movie.begin() + i);
		}
		else
		{
			movie[i] = toupper(movie[i]);
		}
	}

	for (int i = 0; i < numOflettersInMovie; i++) 
	{
		if (isspace(movie[i])) 
		{
			guessMovie.push_back(' ');
		}
		else
		{
			guessMovie.push_back('_');
		}

	}

	for (char alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		unusedLetters.push_back(alphabet);
		unusedLetters.push_back(' ');
	}
}
string HangmanModel::getMovie()
{
	return movie;
}
string HangmanModel::getGuessMovie() 
{
	return guessMovie;
}
string HangmanModel::getUnusedLetters() 
{
	return unusedLetters;
}
int HangmanModel::getLives()
{
	return lives;
}
bool HangmanModel::getInGame() 
{
	return inGame;
}
void HangmanModel::setGuessMovie(string& guessMovie) 
{
	this->guessMovie = guessMovie;
}
void HangmanModel::setUnusedLetters(string& unusedLetters) 
{
	this->unusedLetters = unusedLetters;
}
void HangmanModel::setLives()
{
	lives--;
}
void HangmanModel::setInGame(bool inGame)
{
	this->inGame = inGame;
}