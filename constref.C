#include <iostream>
int main()
{
	const int ival = 1024;
	const int &refVal = ival; // ok: both reference and object are const
	int &ref2 = ival; // error: nonconst reference to a const object
}
