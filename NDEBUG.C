#include <iostream>
using std::cout; using std::cin; using std::endl; using std::cerr;
void print(const int ia[], size_t size) {
#ifndef NDEBUG
	// __func__ is a local static defined by the computer that holds the function's name
	cerr << __func__ << ": array size is " << size << endl;
#endif
}

int main() {}
