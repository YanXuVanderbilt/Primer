#include <iostream>
using namespace std;
int compare(const int a, const int* b) {
	if (a > *b) {
		return a;
	}
	else {
		return *b;
	}
}
int main() {
	int a = 1, b = 2;
	cout << compare(a, &b) << endl;
}

