#include <iostream>
int main() {
	std::cout << "/*";//legal//checked legal
	std::cout << "*/";//legal//checked legal
	std::cout << /* "*/" */;//not legal//checked not legal
	std::cout << /*  "*/" /* "/*" */;//legal//checked legal
	return 0;
}
