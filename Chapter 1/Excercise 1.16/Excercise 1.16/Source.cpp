#include <iostream>
/*This program will add numbers till the end of file*/
int main()
{
	int sum = 0, value = 0;
	while (std::cin >> value && value != 0)
		sum += value;
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}