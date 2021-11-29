#include <iostream>
#include <string>
#include "binary.hpp"
using namespace std;

int main()
{
	char bit;
	string binary;

	cout << "Enter the bits: ";
	while (cin >> bit)
	{
		if (bit != '0' && bit != '1')
			break;
		binary.push_back(bit);
	}

	bit_stuffing(binary);
	cout << "Stuffing: ";
	print_binary(binary);

	bit_unstuffing(binary);
	cout << "\nUnstuffing: ";
	print_binary(binary);
}