#include <iostream>
#include "Sales_item.h"
/*This program will read two objects that have the same isbn and produces their sum*/
int main()
{
	//Excercise 1.21
	Sales_item item1, item2;
	
	std::cout << "Please enter two items \n";
	std::cin >> item1 >> item2;

	if (item1 == item2)
	{
		std::cout << "The numbers match...\n";
		std::cout << item1 + item2 << std::endl;
	}
	else{//Alternative
		std::cerr << "Data does not match\n";
		return -1;//Indicates Failure
	}
	system("pause");
	return 0;
}