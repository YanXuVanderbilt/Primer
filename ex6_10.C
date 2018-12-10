#include <iostream>
using std::cout; using std::cin; using std::endl;
void swap(int*a, int*b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}
int main()
{
        int c = 9, d = 10;
	int *a = &c, *b = &d;
	swap(a,b);
	cout << c << d << endl;
}

