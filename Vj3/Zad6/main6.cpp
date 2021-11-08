#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void reverse_sort(vector<string>& v)
{
	string str;
	cout << "Enter the strings(ctr+z for end of entering):\n";
	while (cin >> str)
	{
		reverse(str.begin(), str.end());
		v.push_back(str);
	}
	sort(v.begin(), v.end());
}
void print_vector(vector<string> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}
int main()
{
	vector<string> v;
	reverse_sort(v);
	print_vector(v);
}

