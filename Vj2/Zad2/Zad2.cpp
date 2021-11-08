#include <iostream>
using namespace std;

int& element(int arr[], int position)
{
	return(arr[position]);
}

int main()
{
	int n, i;

	cout << "Enter the size of array: ";
	cin >> n;
	int* arr = new int[n];

	cout << "Enter the elements of array: " << endl;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int position;
	cout << "Enter the position of element you want to increment: " << endl;
	cin >> position;
	position--;

	element(arr, position) += 1;

	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;

	return 0;
}

