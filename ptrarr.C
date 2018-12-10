#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	int i = 0;
	string nums[] = {"one", "two", "three"};
	string *p = &nums[0];

	string *p2 = nums;
	int ia[] = {0,1,2,3,4,5,6,7,8,9};
	auto ia2(ia);
	//ia2 = 42;
	
	decltype(ia) ia3 = {0,1,2,3,4,5,6,7,8,9};
	//ia3 = p;
	ia3[4] = i;
}
