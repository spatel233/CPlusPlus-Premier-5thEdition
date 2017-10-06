#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::vector;
/*This program will read a sequence of ints from cin and store those values in a vector*/
int main()
{
	vector<int> v1;
	int temp = 0;
	int count = 0;

	while (temp != -1)
	{
		cout << "Enter a value -1 to quit: "; 
		cin >> temp;
		++count;
		v1.push_back(temp);
	}
	cout << "Printing values..." << endl;

	for (int i = 0; i < count; i++)
		cout << v1[i] << ", " << endl;

	system("pause");
	return 0;
}