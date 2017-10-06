#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;

/*This program will add the sum of adjacent elements*/

int main()
{
	vector<int>v1;
	int temp = 0;
	int tempb = 0;
	int tempe = 0;

	while (1)
	{
		cout << "Please enter your values: "; cin >> temp;
		if (temp == -1)
			break;
		v1.push_back(temp);
	}

	auto beg = v1.begin();
	auto endd = v1.end() - 1;
	auto s = v1.size() / 2;
	int count = 0;

	while (count != s)
	{
		cout << "Element : " << *beg + *endd << endl;
		++beg;
		--endd;
		++count;
	}

	system("pause");
	return 0;
}