
#include <iostream>
using namespace std;

void rec_min_max(int arr[], int n, int *min, int *max)
{
	if (n < 0)
		return;

	if (arr[n] > *max)
		*max = arr[n];
	if (arr[n] < *min)
		*min = arr[n];
	return rec_min_max(arr, n - 1, min, max);
}

int main()
{
	int n;

	cout << "Enter the size of array: ";
	cin >> n;

	int* arr = new int[n];
	cout << "Enter the elements of array: " << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int max = arr[0];
	int min = arr[0];

	rec_min_max(arr, n - 1, &min, &max);
	cout << "Largest: " << max << endl;
	cout << "Smallest: " << min << endl;

	delete[] arr;
}


