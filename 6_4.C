#include <iostream>
#include "Chapter6.h"
using namespace std;
int fact(int a) {
	int result = a;
	while (a>1) {
		result*=(--a);
	}
	return result;
}
int main()
{
	printf("%i",fact(5));
}
