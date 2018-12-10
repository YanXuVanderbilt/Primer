#include <iostream>
int main()
{
	int i = 1, *p = &i;
	std::cout << *p << std::endl;
	*p = 2;
	std::cout << i << std::endl;
	int j = 3;
	p = &j;
	std::cout << *p << std::endl; 
}
