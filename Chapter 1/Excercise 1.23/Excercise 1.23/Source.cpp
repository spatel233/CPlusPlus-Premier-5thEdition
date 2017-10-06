#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1[10], item2[10];
	int count = 0, temp = 0;
	int j = 0;

	while (j < 4)
	{
		std::cin >> item1[j++];
	}

	for (int i = 0; i < j; i++)
	{
		if (item1[i] == item1[i + 1])
		{
			while (count < 4)
			{
				if (item2[count] == item1[i])
				{
					temp++;
					item2[count] += item1[i];
				}
				count++;
			}
		}
		else{
			//std::cout << item2 << std::endl;
			item2[temp++] = item1[i];
		}
	}
	count = 0;
	while (count < temp)
	{
		std::cout << "Group " << count << " : " << item2[count++] << std::endl;
	}
	system("pause");
	return 0;
}