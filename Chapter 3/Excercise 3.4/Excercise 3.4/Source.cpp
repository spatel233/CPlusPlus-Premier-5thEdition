#include <iostream>
#include <string>

using std::cout; using std::endl; using std::cin; using std::string;
/*takes input of two strings and compares them in size and checks if their the same word*/
int main()
{
	string d1, d2;

	cout << "Enter information into the two strings: "; cin >> d1 >> d2;

	if (d1 == d2)
	{
		cout << "Both the strings are the same " << endl;
	}
	if (d1.size() > d2.size())
	{
		cout << "The word: " << d1 << " is the larger string out of the two " << endl;
	}
	else if(d1.size() == d2.size()){
		cout << "The size of both the strings are the same " << endl;
	}
	else{
		cout << "The word: " << d2 << " is the larger string out of the two " << endl;
	}

	system("pause");
	return 0;
}