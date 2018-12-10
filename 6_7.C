#include <iostream>
using namespace std;
int c() 
{
	static int change = 0;
	printf("%i", change++);
}
int main ()
{
	c();c();c();c();
}
