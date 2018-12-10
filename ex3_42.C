#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	vector<int> copy = {1,2,3,4};
	int result[copy.size()];
	for (int i = 0; i < copy.size(); ++i)
	{
		result[i] = copy[i];
	}
}
