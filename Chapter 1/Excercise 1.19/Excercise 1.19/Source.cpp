/*Revision of 1.11 will allow the software to work if the first value is smaller than the second value*/
#include <iostream>

int main()
{
	int val1, val2;

	std::cout << "Please enter two numbers: ";
	std::cin >> val1 >> val2;
	if (val1 > val2){
		while (val1 >= val2)
			std::cout << val1-- << ", ";
	}
	else{//If the first value is smaller than the second
		while (val1 <= val2)
			std::cout << val1++ << ", ";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}