#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl; using std::vector; using std::string;
/*This program will read a sequence of strings from cin and store those values in a vector*/
int main()
{
	vector<string> v1;
	string temp;
	int count = 0;

	while (temp != "x")
	{
		cout << "Enter a value x to quit: ";
		cin >> temp;
		++count;
		v1.push_back(temp);
	}
	cout << "Printing values..." << endl;

	for (int i = 0; i < count; i++)
		cout << v1[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}