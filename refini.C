#include <iostream>
int main()
{
	int ival = 1024;
	int &refVal = ival; // ok: refVal refers to iVal
//	int &refVal2; // error: a reference must be initialized
//	int &refVVal3 = 10;  // error: initializer must be an object

	refVal += 2;
	int ii = refVal; 
	std::cout << ii << ival << std::endl;
}
