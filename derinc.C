#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::cin; using std::endl;
int main()
{
	vector<int> v = {1,1,3,-1};
	auto pbeg = v.begin();
	while (pbeg != v.end() && *beg >= 0)
		cout << *pbeg++ << endl;
}
