#include <iostream> 
#include <vector>
#include <iterator>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl; using std::begin; using std::end;
int main()
{
	for (auto p = ia; p != ia + 3; ++p) {
		for (auto q = *p; q != *p + 4; ++q)
			cout << *q << ' ';
		cout << endl;
	}

	for (auto p = begin(ia); p != end(ia); ++p) {
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << ' ';
		cout << endl;
	}
}
