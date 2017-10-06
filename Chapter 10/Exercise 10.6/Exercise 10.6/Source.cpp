#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(){
	vector<int> vec1;

	fill_n(back_inserter(vec1), 10, 0);

	system("pause");
}