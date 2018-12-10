#include <iostream>
using namespace std;
void swap(int* &a, int* &b) 
{
	int *c = a;
	a = b;
	b = c;
}

int main() {
	int a = 1, b = 2;
	int* c = &a, *d = &b;
	swap(c,d);
	cout << *c << " " << *d << endl;
}
