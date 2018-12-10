#include <iostream>
int main()
{
	int start, end;
	std::cout << "Enter range: ";
	std::cin >> start >> end;
	for (int i = start; i <= end; ++i)
		std::cout << i << std::endl;
}
