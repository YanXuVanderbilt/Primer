#include <iostream>
using std::cout; using std::cin; using std::endl;
int main()
{
	int x[10];
	int *p = x;
	cout <<sizeof(x)/sizeof(*x) << endl;
	cout << "size of array is: " << sizeof(x) << endl;
	cout << "size of *array is: " << sizeof(*x) << endl;
	cout << "size of pointer is: " << sizeof(p) << endl;
	cout << "size of dereferenced pointer is: " << sizeof(*p) << endl;
	cout << sizeof(p)/sizeof(*p) << endl;
}
