#include <iostream>
#include <vector>
using namespace std;

void input(vector<int>& v, int n)
{
	int z;
	for (int i = 0; i < n; i++) {
		cin >> z;
		v.push_back(z);
	}
}
void remove_element(vector<int>& v, int i)
{
	i -= 1;
	swap(v[i], v.back());
	v.pop_back();
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
	int n, i;
	vector<int> v;

	cout << "Enter the number of elements in vector: ";
	cin >> n;

	cout << "Enter the elements of vector: " << endl;
	input(v, n);

	cout << "Enter the position of element you want to remove: ";
	cin >> i;
	remove_element(v, i);

	cout << "New vector: ";
	print_vector(v);
}

