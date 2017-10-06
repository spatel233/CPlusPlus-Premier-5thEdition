#include <iostream>
#include <vector>
#include <string>
/*This program will take ints and add them with their current number*/
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int main()
{
	vector<int> v1;
	int temp;

	while (1)
	{
		cout << "Enter numbers -1 to quit..."; cin >> temp;
		if (temp == -1)
			break;
		v1.push_back(temp);
	}
	for (auto itb = v1.begin(); itb != v1.end(); itb++)
	{
		*itb += *itb;
	}
	for (auto i : v1)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}