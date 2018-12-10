#include <iostream>
#include <vector>
#include <iterator>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl; using std::begin; using std::end;
int main()
{
	int ia[] = {0,1,2,3,4,5,6,7,8,9};
	int *beg = begin(ia);
	int *last = end(ia);

	int arr[6];
	int *pbeg = begin(arr), *pend = end(arr);
	while (pbeg != pend && *pbeg >= 0)
		++pbeg;
}
