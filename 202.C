#include <iostream>
using namespace std;
int fact(int val)
{
	int ret = 1; // local variable to hold the result as we calculate it
	while (val > 1)
		ret *= val--; // assgign ret*val to ret and devrement val
	return ret; // return the result
}

