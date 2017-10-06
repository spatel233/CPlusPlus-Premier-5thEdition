#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
	int main = 0;

	cout << "Enter a number: "; cin >> main;

	if (main % 2 == 0)
		cout << "This number is even" << endl;
	else
		cout << "This number is odd" << endl;

	system("pause");
	return 0;
}