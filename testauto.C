#include <iostream>
int main()
{
	int a = 3, b = 4;
	decltype(a = b) d = a;
	decltype(a) c = a;
	auto c2 = a;
	std::cout << d << std::endl;
	std::cout << c << std::endl;
	std::cout << c2 << std::endl;
}
