#include <iostream>
#include "Sales_item.h"

int main()
{  
	Sales_item item, temp;
	int count = 0;
	std::cin >> item;
	++count;
	while (std::cin >> temp) {
		if (item.isbn() == temp.isbn()) {
			++count;
		}
		else {
			std::cout << item.isbn() << " has gone through " << count << " transactions." << std::endl;
			item = temp;
			count = 1;
		}
	}
	std::cout << item.isbn() << " has gone through " << count << " transactions." << std::endl;
}
		
