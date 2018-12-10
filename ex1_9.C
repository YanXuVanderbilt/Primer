#include <iostream>

int main()
{
	int counter = 50, sum = 0;
	while (counter <= 100) {
		sum += counter;
		++counter;
	}

	std::cout << "The sum from 50 to 100 is: " << sum << std::endl;
}
