#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int isShorter(const int &s1, const int &s2){
	return s1 < s2;
}
int main(){
	vector<int>vec{ 0, 1, 2, 3, 5, 8, 1, 6, 2, 1, 0 };
	stable_sort(vec.begin(), vec.end(), isShorter);

	for (auto &s : vec){
		cout << s << " ";
	}

	system("pause");
}