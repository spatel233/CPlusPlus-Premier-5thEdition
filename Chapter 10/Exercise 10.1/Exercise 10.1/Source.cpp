#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int>vec1;
	int i;

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

	int result = count(vec1.begin(), vec1.end(), 5);

	cout << "5 has shown up : " << result << " times" << endl;

	system("pause");
}