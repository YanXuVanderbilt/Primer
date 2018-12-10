#include <iostream>
#include <vector>
#include <iterator>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl; using std::begin; using std::end;
int main()
{
	int int_arr[] = {0,1,2,3,4,5};
	vector<int> ivec(begin(int_arr), end(int_arr));
}
