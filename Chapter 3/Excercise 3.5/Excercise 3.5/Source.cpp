#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;
/*This program will take an input string and concatenate it to one large string*/
int main()
{
	string temp, main;

	do{
		cout << "Enter a word: [x] when your done: ";
		cin >> temp;
		main += temp;
		main += " ";
		cout << main << endl;

	} while (temp != "x");

	system("pause");
	return 0;
}