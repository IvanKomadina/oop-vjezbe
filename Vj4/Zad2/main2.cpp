#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include "pig_latin.hpp"
using namespace std;

int main()
{
	srand(time(NULL));
	vector<string> string_vect;
	int n;

	cout << "Enter the number of sentences: ";
	cin >> n;
	n++;

	input_sentence(string_vect, n);

	string str = random(string_vect, n);
	
	string translated = pig_translate(str);
	cout << "Random sentence on pig latin: " << translated << endl;

}