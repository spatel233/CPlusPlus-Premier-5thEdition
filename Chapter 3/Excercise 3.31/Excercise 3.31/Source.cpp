#include <iostream>

using std::cin; using std::cout; using std::endl;

/*This program will define an array of ten ints*/
/*It will then give each element the same value*/
/*As its position*/

int main()
{
	int temp[10];

	for (auto &i : temp)
	{
		cout << "Enter value : "; cin >> i;
	}

	for (auto i : temp)
		cout << i << ", ";

	system("pause");
	return 0;
}