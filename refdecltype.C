#include <iostream>
int main()
{
	// decyltype of an expression can be a reference type
	int i = 42, *p = &i, &r = i;
	decltype(r + 0) b;
	decltype(*p) c;

	// decltype of a parenthesized variable is always a reference
	decltype((i)) d; // error: d is int & must be initialized
	decltype(i) e; // ok: e is an (unitialized) int 
}

