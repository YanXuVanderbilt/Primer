#include <iostream>
using namespace std;
int main()
{
	int ia[] = {0,1,2,3,4,5,6,7,8,9}; // ia is an array of ten ints
	auto ia2(ia); // ia2 is an int* that points to the first element in ia
	ia2 = 42; // error: ia2 is a pointer, and we can't assign an int to a pointeri
	return 0;
}
