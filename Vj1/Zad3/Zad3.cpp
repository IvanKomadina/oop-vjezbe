
#include <iostream>
using namespace std;

int find_max(int a[], int n)
{
	int i, max;

	max = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

int find_min(int a[], int n)
{
	int i, min;

	min = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}

int main()
{
	int i, n;

	cout << "Enter the size of array: ";
	cin >> n;

	int* arr = new int[n];

	cout << "Enter the elements of array: " << endl;
	for (i = 0; i < n; i++)
		cin >> arr[i];

	int max = find_max(arr, n);
	int min = find_min(arr, n);

	cout << "Largest: " << max << endl;
	cout << "Smallest: " << min << endl;
	delete[] arr;

}