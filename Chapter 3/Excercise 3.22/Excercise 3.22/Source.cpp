#include <iostream>
#include <string>
#include <vector>

/*This program will take a paragraph of text and change all the characters to caps*/
using std::cin; using std::cout; using std::endl; 
using std::string; using std::vector;

int main()
{
	vector<string> main;
	string temp;

	while (temp != "X")
	{
		cout << "Enter a line [x] to quit : ";
		getline(cin, temp);
		for (auto itb = temp.begin(); itb != temp.end(); itb++)
		{
			*itb = toupper(*itb);
		}
		main.push_back(temp);
	}

	for (auto i : main)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}