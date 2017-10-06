#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string; using std::endl;
/*This program will change every letter in a string to a X using a while loop*/
int main()
{
	string main;

	cout << "Enter a word: ";
	cin >> main;

	if (main.empty())
		return -1;

	decltype(main.size()) index = 0;

	while (index != main.size())
	{
		main[index] = 'X';
		++index;
	}
	cout << main << endl;

	system("pause");
	return 0;
}