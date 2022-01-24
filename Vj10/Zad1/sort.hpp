#pragma once
#include <iostream>
using namespace std;

template<typename T>
void sortArr(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

template<>
void sortArr<char> (char arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (tolower(arr[i]) < tolower(arr[j]))
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}
