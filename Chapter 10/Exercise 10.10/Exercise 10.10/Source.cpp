#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	vector<string>vec;
	vector<string>::iterator it;
	string ans;


	cout << "Enter a string: "; cin >> ans;
	vec.push_back(ans);
	cout << "Enter a string: "; cin >> ans;
	vec.push_back(ans);
	cout << "Enter a string: "; cin >> ans;
	vec.push_back(ans);
	cout << "Enter a string: "; cin >> ans;
	vec.push_back(ans);
	cout << "Enter a string: "; cin >> ans;
	vec.push_back(ans);
	cout << "Enter a string: "; cin >> ans;
	vec.push_back(ans);

	/*Must sort first before getting unique values*/
	sort(vec.begin(), vec.end());
	it = unique(vec.begin(), vec.end());
	vec.erase(it, vec.end());

	for (auto itDisplay : vec){
		cout << itDisplay << " ";
	}
	cout << endl;

	system("pause");
}