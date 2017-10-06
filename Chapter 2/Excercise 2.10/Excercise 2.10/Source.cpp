#include <iostream>
#include <string>
std::string global_str;
int global_int;
/*all variables used in this excercise is uninitialized*/
int main()
{
	int local_int;
	std::string local_str;

	std::cout << global_int << local_int << std::endl;
	std::cout << global_str << local_str;
	system("pause");
	return 0;
}