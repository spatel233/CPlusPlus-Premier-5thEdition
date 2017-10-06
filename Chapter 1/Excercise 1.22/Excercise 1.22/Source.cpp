#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;

	while (std::cin >> item2)
	{
		item1 += item2;
	}
	std::cout << item1 << std::endl;
	system("pause");
	return 0;
}