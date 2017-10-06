#include <iostream>

int main()
{
	int value = 10;
	while (value >= 0)
		std::cout << value-- << ", ";
	std::cout << std::endl;
	system("pause");
	return 0;
}