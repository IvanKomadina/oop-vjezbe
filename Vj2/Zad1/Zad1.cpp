#include <iostream>
using namespace std;

void minmax(int arr[], int n, int& min, int& max)
{

	int i;

	for (i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
}

int main()
{
	int n;

	cout << "Enter the size of array: ";
	cin >> n;

	int* arr = new int[n];
	cout << "Enter the elements of array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int min = arr[0];
	int max = arr[0];

	minmax(arr, n, min, max);
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

	delete[] arr;

	return 0;
}


