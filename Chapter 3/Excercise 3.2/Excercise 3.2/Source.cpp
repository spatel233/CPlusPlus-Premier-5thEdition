#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main()
{
	string line;

	getline(cin, line);

	if (!line.empty())
	{
		cout << line << endl;
	}
	else{
		return -1;
	}

	cout << "Single word entry : "; cin >> line;
	cout << line << endl;
	system("pause");
	return 0;
}