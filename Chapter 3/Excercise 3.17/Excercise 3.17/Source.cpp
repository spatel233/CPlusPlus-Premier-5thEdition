#include <iostream>
#include <vector>
#include <string>
/*This program will read words and make them all caps and print them out*/
using std::cin; using std::cout; using std::endl; using std::string; using std::vector;

int main()
{
	vector<string>v1;
	string temp;
	while (temp != "X")
	{
		cout << "Enter a line[x]: ";
		getline(cin, temp);
		for (auto &i : temp)
			i = toupper(i);
		v1.push_back(temp);
	}
	
	for (auto i : v1)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}