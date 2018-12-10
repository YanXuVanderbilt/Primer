#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	int test1[10];
	int test2[10];

	for (int i = 0; i < 10; ++i)
	{
		if (test1[i] != test2[i])
			return 1;
	}

	vector<int> vec1{1,2};
	vector<int> vec2{1,2};
	if (vec1.size() != vec2.size())
		return 1;
	else {
		for (int i = 0; i < vec1.size(); ++i)
		{
			if (vec1[i] != vec2[i])
				return 1;
		}
	}
}
