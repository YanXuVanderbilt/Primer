#include <iostream>
#include "Chapter6.h"
int fact(int val) {
	int ret = 1;
	while (val > 1) {
		ret *= val--;
		std::cout << ret << std::endl;
	}
	return ret;
}
