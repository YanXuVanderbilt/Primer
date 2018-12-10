#include <iostream>
using namespace std;
void print(const int *beg, const int *end)
{
	// print every element starting at beg up to but not including end
	while (beg != end)
		cout << *beg++ << endl; // print the current element
	                                // and advance the pointer
}

int main() 
{
int j[2] = {0, 1};
// j is converted to a pointer to the first element in j
// the second argument is a pointer to one past the end of j
print(begin(j), end(j)); // begin and end functions
}

