#include <iostream>
using std::cout; using std::cin; using std::endl;
void swap (int &a, int &b) {
	int temp = b;
	b = a;
	a = temp;
}

int main()
{
	int a = 9, b = 10;
	int &c = a, &d = b;
	swap(c,d);
	cout << a << b << endl;
}
