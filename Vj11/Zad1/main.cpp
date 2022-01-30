#include <iostream>
#include <fstream>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>
using namespace std;

void readNumbers(const string& filename, vector<int>& numbers)
{
	ifstream file;
	int temp;

	file.open(filename);
	if (file.fail())
	{
		throw exception();
	}
	istream_iterator<int> it(file);
	istream_iterator<int> eos;
	copy(it, eos, back_inserter(numbers));
}

int main()
{
	vector<int> v;
	const string filename = "numbers.txt";

	try
	{
		readNumbers(filename, v);
	}
	catch (const exception& e)
	{
		cerr << "Error opening file" << endl;
		exit(1);
	}

	for (auto number : v)
	{
		cout << number << " ";
	}
	cout << endl << endl;

	int count = count_if(v.begin(), v.end(), [](int i) { return i > 500; });
	cout << "Numbers that are bigger than 500: " << count << endl;

	int min = *min_element(v.begin(), v.end());
	int max = *max_element(v.begin(), v.end());
	cout << "Min element: " << min << endl;
	cout << "Max element: " << max << endl;

	vector<int>::iterator it;
	it = remove_if(v.begin(), v.end(), [](int i) { return i < 300; });
	v.resize(distance(v.begin(), it));
	sort(v.begin(), v.end(), greater<int>());

	for (auto number : v)
	{
		cout << number << " ";
	}
	cout << endl;
}