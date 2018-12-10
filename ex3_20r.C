#include <iostream>
#include <vector> 
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	vector<int> result;
	int input;
	while(cin >> input) {
		result.push_back(input);
	}
        for (auto it = result.begin(); it < result.end() - 1; ++it)
	{
		int temp = *it;
		++it;
		cout << temp + *it << " ";
		--it;
	}
	cout << endl;

	auto it1 = result.begin();
	auto it2 = result.end();

	for (auto it = result.begin(); it + result.size()/2 < it2; ++it)
	{
		auto it2 = result.end();
		int temp = *it;
		auto tempit = it1 + (it2 - it - 1);
		int temp2 = *tempit;
		cout << temp + temp2 << " ";
		
	}
	cout << endl;

}
