#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void remove(string& str)
{
	int i = 0;
	while (i < str.length())
	{
		if (isspace(str[i]) && ispunct(str[i + 1]))
			str.erase(str.begin() + i);
		if (ispunct(str[i]) && isalpha(str[i + 1]))
			str.insert(i+1, " ");
		i++;
	}
}
int main()
{
	string str;
	cout << "Enter the sentence: ";
	getline(cin, str);
	remove(str);
	cout << str;
}