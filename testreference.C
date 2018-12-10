#include <iostream>
using namespace std;
int main() 
{
	int a = 1;
	int &b = a;
	printf("location of a is %lli, value of a is %lli\n", &a, a);
	printf("location of b is %lli, value of b is %lli\n", &b, b);
}

