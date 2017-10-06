#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	char s[] = "hello";
	char v[] = "hello";

	bool equals;

	/*Wont Work Uses Iterators for Perameters*/
	equals = equal(begin(s), end(s), begin(v));

	cout << equals << endl;
}