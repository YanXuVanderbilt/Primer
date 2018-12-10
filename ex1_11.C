#include <iostream>

int main()
{
	int start, end;
	std::cin >> start >> end;
	int i = start;
	while (i <= end) {
		std::cout << i << std::endl;
		++i;
	}
	return 0;
}
