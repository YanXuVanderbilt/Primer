#include <iostream>
int main() {
	int sum;
	int start = 50;
	while (start <=100) {
		sum+=start;
		++start;
	}
	std::cout << "Sum of 50 to 100 is: " << sum << std::endl;
	return 0;
}

