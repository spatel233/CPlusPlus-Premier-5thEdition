#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

/*This program will define an array of ten ints*/
/*It will then give each element the same value*/
/*As its position*/

int main()
{
	vector <int> temp(10, 0);
	vector <int> copy(10, 0);
	for (auto &i : temp)
	{
		cout << "Enter value : "; cin >> i;
	}

	copy = temp;

	for (auto i : copy)
		cout << i << ", ";

	system("pause");
	return 0;
}