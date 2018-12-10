#include <iostream>
int main()
{
	int *ip1, *ip2; // both ip1 and ip2 are pointers to int
	double dp, *dp2; // dp2 is a pointer to double; dp is a double

        int ival = 42;
	int* p =  &ival; // p holds the address of ival; p is a pointer to ival
	//std::cout << *p << std::endl;

	double dval;
	double *pd = &dval; // ok: initializer is the address of a double
	double *pd2 = pd; // ok: initializer is a pointer to double

	std::cout << "Output of pd: " << pd << "\nOutput of *pd: " << *pd << "\nOutput of pd2: " << pd2 << "\nOutput of *pd2: " << *pd2 << std::endl;

	/**
	int* pi = pd; //error: types of pi and pd differ
	pi = &dval; // error: assigning the address of a double to a pointer to int 
**/
}
