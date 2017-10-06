#include <iostream>
#include <vector>
/*This program will take integers and will add the first and last*/
/*Then it will add the second and second last and so on*/
using std::cin; using std::cout; using std::endl; using std::string; using std::vector;

int main()
{
	vector<int> v1;
	int temp = 0;
	int count = 0;
	int count2 = 0;

	while (1)
	{
		cout << "Enter a value greater than 0: "; cin >> temp;
		if (temp == -1)
			break;
		v1.push_back(temp);
		++count;
	}
	--count;
	for (auto &i : v1)
	{
		if (count2 == count)
			break;
		i += v1[count];
		cout << i << ", ";
		++count2;
		--count;
	}

	system("pause");
	return 0;
}