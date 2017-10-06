#include <iostream>

int main()
{
	int *p1 = nullptr , i;
	p1 = &i;

	std::cout << "what value will you want in the pointer? ";
	std::cin >> i;
	std::cout << "Your new pointer value is " << *p1 << std::endl;
	system("pause");
	return 0;
}