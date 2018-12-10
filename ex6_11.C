#include <iostream>
using std::cout; using std::cin; using std::endl;
void reset(int &a) {
	a = 0;
	}
int main()
{
	int a = 10;
	int &b = a;
	reset(b);
}
