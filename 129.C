#include <iostream>
using namespace std;
int main()
{
	int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	// p points to the first array in ia
	for (auto p = begin(ia); p != end(ia); ++p) {
		// q points to the first element in an inner array
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << ' '; // prints the int value to which q points
	cout << endl;
	}
}
