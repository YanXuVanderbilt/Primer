#include <iostream>
int main()
{
	int start, end;
	std::cin >> start >> end;
	if (start <= end) {
		for (int i = start; i <= end; ++i) {
			std::cout << i << std::endl;
		}
	}
	else {
		for (int i = end; i <= start; ++i) {
			std::cout <<i << std::endl;
		}
	}
}

