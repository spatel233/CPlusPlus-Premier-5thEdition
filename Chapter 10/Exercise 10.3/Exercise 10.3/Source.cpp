#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
	vector<double>vec1;
	double i;

	cout << "Enter a number : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a number : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a number : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a number : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a number : "; cin >> i;
	vec1.push_back(i);
	cout << "Enter a number : "; cin >> i;
	vec1.push_back(i);

	/*Works fine*/
	double result = accumulate(vec1.begin(), vec1.end(), 0);

	cout << "Total : " << result << endl;

	system("pause");
}