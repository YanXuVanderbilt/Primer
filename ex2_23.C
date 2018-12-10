#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	vector<int> result(10,1);
	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i];
	}
	cout << endl;

	for (auto it = result.begin(); it != result.end(); ++it)
	{
		*it = 2**it;
	}
	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i];
	}
	cout << endl;

	return 0;
}

