#include <iostream>
using namespace std;
int swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
int main() {
	int a = 1, b = 2;
	swap(&a,&b);
	printf("%i %i", a, b);
}
