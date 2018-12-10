#include <iostream>
int main()
{
	int input1,input2;
	int start,end;
	std::cout << "Input start and end: " << std::endl;
	while (std::cin >> input1 >> input2) {
		int current = input1;
		while (current <= input2) {
			std::cout << current << " ";
			++current;
		}
		std::cout << std::endl;
	}
	return 0;
}
