#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	int ia[] = {0,2,4,6,8};
	int i = ia[2];
	int *p = ia;
	i = *(p + 2);

	int *p1 = &ia[2];
	int j = p1[1];
	int k = p1[-2];
}
