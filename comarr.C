#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	int *ptrs[10];
	//int &refs[10] = / * ? * /;
	int (*Parray) [10] = &arr;
	int (&arrRef) [10] = arr;
	int *(&arry)[10]  = ptrs;
}
