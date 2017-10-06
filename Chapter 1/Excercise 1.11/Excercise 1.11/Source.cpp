#include <iostream>

int main()
{
	int val1, val2;
	
	std::cout << "Please enter two numbers: "; 
	std::cin >> val1 >> val2;

	while (val1 >= val2)
		std::cout << val1-- << ", ";
	std::cout << std::endl;
	system("pause");
	return 0;
}