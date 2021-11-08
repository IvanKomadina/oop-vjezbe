#include <iostream>
#include <vector>
#include "vector.hpp"
using namespace std;

void vector_numOfElements(vector<int>& v, int n)
{
	int z;
	for (int i = 0; i < n; i++)
	{
		cin >> z;
		v.push_back(z);
	}
}

void vector_interval(vector<int>& v, int a, int b)
{
	int z;

	if (a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	cin >> z;
	while ((z >= a) && (z <= b))
	{
		v.push_back(z);
		cin >> z;
	}
}

void print_vector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}

int main()
{
	int n1, n2, a, b;
	vector <int> v1, v2;

	cout << "Enter the size of first vector: ";
	cin >> n1;

	cout << "Enter the elements of first vector: " << endl;
	vector_numOfElements(v1, n1);

	cout << "Enter the interval for elements of second vector: " << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	cout << "Enter the elements of second vector: " << endl;
	vector_interval(v2, a, b);

	cout << "First vector: ";
	print_vector(v1);

	cout << "\nSecond vector: ";
	print_vector(v2);
}

