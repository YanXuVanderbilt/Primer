#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	using int_array = int[4];
	typedef int int_array[4];

	for (int_array *p = ia; p != ia + 3; ++p) {
		for (int *q = *p; q != *p + 4; ++q) 
			cout << *q << ' ';
		cout << endl;
	}
}
