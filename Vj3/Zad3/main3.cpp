#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void input(vector<int>& v, int n)
{
	int z;
	for (int i = 0; i < n; i++)
	{
		cin >> z;
		v.push_back(z);
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
	vector<int> v;
	int n;

	cout << "Enter the size of vector: ";
	cin >> n;

	cout << "Enter the elements of vector: " << endl;
	input(v, n);

	sort(v.begin(), v.end());

	v.insert(v.begin(), 0);

	int sum = accumulate(v.begin(), v.end(), 0);

	v.insert(v.end(), sum);

	cout << "New vector: ";
	print_vector(v);
}
