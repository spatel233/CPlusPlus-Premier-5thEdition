/*This program will initialize
an array and make it all zero*/

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
	int arr[5];

	cout << "Initializing..." << endl;

	for (auto &i : arr)
		i = 0;
	for (auto i : arr)
	{
		cout << i << ", ";
	}
	cout << "Finished Initialization..." << endl;

	system("pause");
	return 0;
}