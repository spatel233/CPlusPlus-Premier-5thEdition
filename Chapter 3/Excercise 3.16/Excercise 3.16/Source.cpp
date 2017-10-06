#include <iostream>
#include <vector>
#include <string>
/*This program will print the vector size and print contents inside the vector*/
using std::cin; using std::cout; using std::endl; using std::vector; using std::string;

int main()
{
	vector<int> v1;

	cout << "Vector 1 has " << v1.size() << " elements " << endl;

	vector<int> v2(10);

	cout << "Vector 2 has " << v2.size() << " elements " << endl;
	for (auto i : v2)
		cout << i << ", ";
	cout << endl;

	vector<int> v3(10, 42);

	cout << "Vector 3 has " << v3.size() << " elements " << endl;
	for (auto i : v3)
		cout << i << ", ";
	cout << endl;

	vector<int> v4{ 10 };

	cout << "Vector 4 has " << v4.size() << " elements " << endl;
	for (auto i : v4)
		cout << i << ", ";
	cout << endl;

	vector<int> v5{ 10, 42 };

	cout << "Vector 5 has " << v5.size() << " elements " << endl;
	for (auto i : v5)
		cout << i << ", ";
	cout << endl;

	vector<string> v6{ 10 };

	cout << "Vector 6 has " << v6.size() << " elements " << endl;
	for (auto i : v6)
		cout << i << " ";
	cout << endl;

	vector<string> v7{ 10, "hi" };

	cout << "Vector 7 has " << v7.size() << " elements " << endl;
	for (auto i : v7)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}