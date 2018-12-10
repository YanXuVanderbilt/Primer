#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2, item3;
	std::cin >> item1 >> item2 >> item3;
	if (item1.isbn() == item2.isbn() && item1.isbn() == item3.isbn()) {
		std::cout << item1 + item2 + item3 << std::endl;
	}
	else {
		std::cout << "isbn not the same" << std::endl;
	}
}
