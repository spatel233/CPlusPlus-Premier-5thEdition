#include <iostream>
/*Program will sum numbers from 50-100*/
int main()
{
	std::cout << "Summing numbers from 50-100" << std::endl;
	int v1 = 50, sum = 0;	//variables to get sum of number 50-100
	while (v1 <= 100)	//will execute aslong as v1 is less than or equal to 100
	{
		sum += v1;
		++v1;
	}
	std::cout << "Sum of numbers from 50-100: " << sum << std::endl;
	std::system("pause");
	return 0;
}