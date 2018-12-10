#include <iostream>
using namespace std;
void reset(int &ip)
{
	ip = 0;
}
int main() {
	int a = 2;
	reset(a);
	printf("a is %i", a);
}
