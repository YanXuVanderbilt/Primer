#include <iostream>
int main()
{
	int i = 0;
	int *const p1 = &i;
	const int ci = 42;
	const int *p2 = &ci;
	const int *const p3 =  p2;
	const int &r = ci; 

	p2 = p3;
	p2 = &i; 
	int& r = ci;
	const int& r2 = i;
}
