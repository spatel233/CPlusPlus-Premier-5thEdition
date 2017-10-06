/*Compares two arrays
 Compares two vectors*/

#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;

int main()
{
	vector<int> v1(10, 0);
	vector<int> v2(10, 0);

	if (v1 == v2)
		cout << "Equal...." << endl;
	else
		cout << "Not Equal...." << endl;
	/*int arr[5], arr2[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Value 1: "; cin >> arr[i];
		cout << "Value 2: "; cin >> arr2[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == arr2[i])
			cout << "These are equal" << endl;
		else{
			cout << "Not equal" << endl;
		}
	}*/
	system("pause");
	return 0;
}