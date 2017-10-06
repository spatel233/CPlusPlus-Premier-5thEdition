#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main(){
	/*FIXED*/
	/*A)
	vector<int> vec;
	list<int>lst;
	int i;
	while (cin >> i){
		lst.push_back(i);
		copy(lst.begin(), lst.end(), back_inserter(vec));
	}
	for (auto i : vec){
		cout << i << " ";
	}
	cout << endl;*/


	/*FIXED*/
	/*B)
	vector<int> vec;
	vec.reserve(10);

	fill_n(back_inserter(vec), 10, 0);
	for (auto i : vec){
		cout << i << " ";
	}
	cout << endl;
	*/
	system("pause");
}