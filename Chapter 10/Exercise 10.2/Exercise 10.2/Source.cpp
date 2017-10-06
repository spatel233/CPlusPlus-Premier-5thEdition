#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main(){
	list<string>vec1;
	string i;

	cout << "Enter a value : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a value : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a value : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a value : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a value : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a value : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a value : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a value : "; cin >> i;
	vec1.push_back(i);

	int result = count(vec1.begin(), vec1.end(), "hello");

	cout << "5 has shown up : " << result << " times" << endl;

	system("pause");
}