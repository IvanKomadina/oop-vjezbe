#include <iostream>
#include "sort.hpp"
using namespace std;

int main()
{
	int iarr[] = { 10, 3, 8, 13, 6, 2, 11 };
	char carr[] = { 'g', 'r', 'M', 'a', 'V' };

	int n = sizeof(iarr) / sizeof(iarr[0]);
	int m = sizeof(carr) / sizeof(carr[0]);

	sortArr(iarr, n);
	sortArr(carr, m);

	for (int i = 0; i < n; i++)
	{
		cout << iarr[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < m; i++)
	{
		cout << carr[i] << " ";
	}
}