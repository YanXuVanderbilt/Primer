#include <iostream>
int main()
{
	const int v2 = 0;
	int v1 = v2;
	v1 = 1 ;
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, &r2 = v2;  
}

