#include <iostream>
int main()
{
	int base, exp;
	int result = 1;
	std::cout << "Input base and exponent. Base an int, exponent a positive number. Base first, exponent second" << std::endl;
	std::cin >> base >> exp;

	for (int cnt = 0; cnt != exp; ++cnt)
	{
		result *= base;
	}

	std::cout << "The result of " << base << " raised to " << exp << " is:\t" << result << "." << std::endl;
}

