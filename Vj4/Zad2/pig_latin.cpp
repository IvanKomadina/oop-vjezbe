#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "pig_latin.hpp"
using namespace std;

void input_sentence(vector<string>& v, int n)
{
	string str;
	for(int i = 0; i < n; i++)
	{
		cout << "Enter the sentence: ";
		getline(cin, str);
		v.push_back(str);
	}
}

string random(vector<string> v, int n)
{
	int rand_num = rand() % n;
	return v[rand_num];
}

bool is_vowel(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		return true;
	else
		return false;
}

string consonants(string str)
{
	string str2;
	int i = 0;
	while (!is_vowel(str[i]))
	{
		i++;
	}
	str2 = str.substr(i) + str.substr(0, i) + "ay ";
	return str2;
}

string pig_translate(string str)
{
	stringstream s(str);
	string word;
	string pig_latin;
	while (s >> word)
	{
		int n = word.length();
		if (is_vowel(word[0]))
		{
			if (ispunct(word[n - 1]))
			{
				pig_latin += word.substr(0, n - 1) + "hay" + word[n - 1] + " ";
			}
			else
				pig_latin += word + "hay ";
		}
		if (!is_vowel(word[0]))
		{
			if (ispunct(word[n - 1]))
			{
				pig_latin += consonants(word.substr(0, n - 1)) + word[n - 1] + " ";
			}
			else
			{
				pig_latin += consonants(word);
			}
		}
	}
	return pig_latin;
}