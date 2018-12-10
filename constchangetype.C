#include <iostream>
int main()
{
	int i = 42;
	// legal for const references only
	const int &r = 42;
	const int &r2 = r + i;

	double dval = 3.14;
	const int &ri = dval;
	std::cout << ri << std::endl;
}
