#include <iostream>
using namespace std;
void reset(int *ip)
{
	*ip = 0; // changes the value of the object to which ip points
	ip = 0; // changes only the local copy of ip; the argument is unchanged
	printf("location of ip is %lli, value of ip is %lli, value ip points to is %lli", &ip, ip, *ip);
}
int main() {
	int i = 42; 
	reset(&i); // changes i but not the address of i
	cout << "i = "  << i << endl; // prints i = 0
}
