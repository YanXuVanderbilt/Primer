#include <iostream>
int main()
{
	int i = 42;
	int &r = i;
	int *p;
	p = &i;
	*p = i;
	int &r2 = *p;

	eturn 0;
}
