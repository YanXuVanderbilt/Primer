#include <iostream>
int main()
{
	const int i = 42;
	auto j = i; const auto &k = i; auto *p = &i;
	const auto j2 = 1, &k2 = i; 

	std::string teststr = "abc";
	double testdouble = 20.00;
	int testint = 20;
	//j = teststr;

	//result: j is int
	std::cout << "Printing j: " << j << "\nPrinting j2: " << j2 << "\nPrining k2: " << k2 << std::endl;
}











