/*This program will copies a vector into an array*/
#include <iostream>
#include <vector>
#include <cstdlib> 
using std::cin; using std::cout; using std::endl;
using std::vector; using std::iterator;

int main()
{
	int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int> ivec(10, 1);
	int j = 0;

	for (auto i : ivec)
	{
		arr[j] = i;
		++j;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ", ";
	cout << endl;

	system("pause");
	return 0;
}