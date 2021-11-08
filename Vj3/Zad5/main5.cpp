#include <iostream>
#include <string>
using namespace std;

int count(string str, string substr)
{
	int i = 0;
	size_t pos = str.find(substr, 0);
	while (pos != string::npos)
	{
		i++;
		pos = str.find(substr, pos + substr.size());
	}
	return i;
}
int main()
{
	int i;
	string str, substr;

	cout << "Enter the string: ";
	getline(cin, str);

	cout << "Enter the substring: ";
	getline(cin, substr);

	i = count(str, substr);
	cout << "Number of appearance of substring: " << i << endl;

}

