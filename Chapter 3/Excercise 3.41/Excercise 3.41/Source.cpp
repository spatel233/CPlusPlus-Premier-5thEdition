/*This program will initialize a vector from an array of ints*/
#include <iostream>
#include <vector>
#include <cstdlib> 
using std::cin; using std::cout; using std::endl; 
using std::vector; using std::iterator;

int main()
{
	int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int> ivec(std::begin(arr), std::end(arr));

	for (auto i : ivec)
		cout << i << ", ";
	cout << endl;

	system("pause");
	return 0;
}