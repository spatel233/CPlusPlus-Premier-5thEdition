#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
	vector <unsigned> scores(11, 0);
	auto beg = scores.begin();
	int temp = 0;

	while (cin >> temp)
	{
		if (temp <= 100)
			*beg = temp / 10;
		cout << *beg << ", ";
		++beg;
	}

	system("pause");
	return 0;
}