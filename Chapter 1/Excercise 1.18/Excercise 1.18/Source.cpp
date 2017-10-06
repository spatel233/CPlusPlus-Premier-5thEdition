#include <iostream>
/*This program uses the assignment operator instead of the equality operator*/
int main()
{
	int currVal = 0, val = 0;

	if (std::cin >> currVal){
		int cnt = 1;
		while (std::cin >> val)
		{
			if (val = currVal)
			{
				++cnt;
			}
			else{
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}
	system("pause");
	return 0;
}