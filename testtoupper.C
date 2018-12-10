#include <iostream>

int main()
{
	char b = 'a';
	char &a = b;

	std::string test = "abc";

	std::cout << toupper(a) << std::endl;
	for (auto &a : test)
		a = toupper(a);
	std::cout << test << std::endl;
}
