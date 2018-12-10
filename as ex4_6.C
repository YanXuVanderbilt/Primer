#include <iostream>
int main()
{
	int input;
	std::cin >> input;
	int remainder = input % 2;
	if (remainder == 0) 
		std::cout << "Even" << endl;
	else 
		std::cout << "Odd" << endl;
}

