#include <iostream>
#include <vector>
using std::vector;
int test(int int1, int int2);
using type1 = decltype(test);
vector<type1*> v;

int add(int int1, int int2) {
	int result = int1 + int2;
	return result;
}
int sub(int int1, int int2) {
	int result = int1 - int2;
	return result;
}
int mul(int int1, int int2) {
	int result = int1 * int2;
	return result;
}
int div(int int1, int int2) {
	return int2 != 0 ? int1/int2 : 0'}
}

vector<type1*> vec{add, sub, mul, div};

int main() {}

