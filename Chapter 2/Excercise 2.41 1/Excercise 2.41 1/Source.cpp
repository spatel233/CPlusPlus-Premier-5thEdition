#include <iostream>
#include <string>

#include "Sales_Data.h"

int main()
{
	Sales_data data2;
	auto count = 0;
	std::string amount[10] = { "0", "0", "0", "0", "0", "0", "0", "0", "0", "0" };
	int taken = 0;
	bool pass = false;
	std::string temp;
	int occuring = 0;

	std::cout << "Please enter in a book: ";
	std::cin >> data1.bookNo >> data1.units_sold >> data1.revenue;

	while (std::cin >> data2.bookNo >> data2.units_sold >> data2.revenue)
	{
		if (data1.bookNo == data2.bookNo)
		{
			++count;
			for (int i = 0; i < 10; i++)
			{
				if (data1.bookNo == amount[i])
				{
					pass = true;
					++taken;
				}
			}
			if (pass == false)
			{
				amount[taken] = data1.bookNo;
				++taken;
			}
		}
		else{
			std::cout << "Book No: " << data1.bookNo << " has appeared " << count << " times ";
			count = 0;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		temp = amount[i];
		if (temp == "0")
			continue;
		else{
			for (int j = 0; j < 10; j++)
			{
				if (temp == amount[j])
				{
					++occuring;
					amount[j] = "0";
				}
				else{
					std::cout << "the book number " << temp << " has appeared in history " << occuring << " times " << std::endl;
					occuring = 0;
					break;
				}
			}
		}
	}
	system("pause");
	return 0;
}