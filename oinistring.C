#include <iostream>
// alternative ways to initialize string from a character string literal
int main()
{
	std::string titleA = "C++ Primer, 4th Ed.";
        std::string titleB("C++ Primer, 4trh Ed.");

	std::string all_nines(10, '9'); // all_nines = "9999999999"
	std::cout << all_nines << std::endl;
}
