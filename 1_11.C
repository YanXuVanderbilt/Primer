#include <iostream>
int main()
{
	int input1,input2;
	int start,end;
	std::cout << "Input start and end: " << std::endl;
	std::cin >> input1 >> input2;
	if (input1 > input2) {
		start = input2; end = input1;
	} else {
		start = input1; end = input2;
	}
	int changer = start;
	while (changer <= end) {
		std::cout << changer << " ";
		++changer;
	}
	std::cout << std::endl;
}
