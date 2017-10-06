#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
	int last = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	int endd = (12 / (3 * 4)) + (5 * 15) + 24 % 4 / 2;

	cout << last << " " << endd << endl;
	system("pause");
	return 0;
}