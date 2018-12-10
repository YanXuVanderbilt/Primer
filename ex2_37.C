#include <iostream>
int main()
{
	int a = 3, b = 4;
	decltype(a) c = a; // int c = 3
	decltype(a = b) d = a; // int * d = &3

	std::cout << "Outpus of a, b, c, d are: " << a << ", " << b << ", " << c << ", " << d << std::endl;
}
