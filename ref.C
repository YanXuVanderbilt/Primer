#include <iostream>
int main()
{
	int i = 42;
	std::cout << i << std::endl;
	//int c = &i;

        int &rf = i;
	return 0;
}
