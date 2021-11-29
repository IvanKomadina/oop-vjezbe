#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void print_match(vector<char> v, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
}

void remove_match(vector<char> v, int n)
{
	for (int i = 0; i < n; i++)
	{
		v.pop_back();
	}
}
int main()
{
	srand(time(NULL));
	vector<char> match_sticks(21, '|');
	int number = match_sticks.size();
	int user_choice, comp_choice;

	while (number >= 1)
	{
		if (number == 1)
		{
			cout << "User won!";
			break;
		}
		
		cout << "\nMatch sticks left: " << number << endl;
		print_match(match_sticks, number);
		cout << "\nComputer picking..." << endl;
		if (number > 5)
		{
			comp_choice = (rand() % 3) + 1;
		}
		else if (number < 5)
		{
			comp_choice = number - 1;
		}
		cout << "Computer picked up " << comp_choice << " match sticks " << endl;
		number -= comp_choice;
		remove_match(match_sticks, number);
		cout << "\nMatch sticks left: " << number << endl;
		print_match(match_sticks, number);
		if (number == 1)
		{
			cout << "\nComputer won!";
			break;
		}

		cout << "\nPick up 1-3 match sticks: ";
		cin >> user_choice;
		if (user_choice > 3 || user_choice < 1)
		{
			cout << "Invalid entry!" << endl;
			break;
		}
		number -= user_choice;
	}
}