#include <iostream>
#include <string>
#include "binary.hpp"
using namespace std;

void bit_stuffing(string& str)
{
	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '1')
		{
			cnt++;
			if (cnt == 5)
			{
				str.insert(i+1, "0");
				cnt = 0;
			}
		}
		else
		{
			cnt = 0;
		}
	}
}

void bit_unstuffing(string& str)
{
	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '1')
		{
			cnt++;
			if (cnt == 5)
			{
				str.erase(i+1, 1);
				cnt = 0;
			}
		}
		else
		{
			cnt = 0;
		}
	}
}

void print_binary(string str)
{
	for (int i = 0; i < str.length(); i++)
		cout << str[i];
}