#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::string; using std::vector; using std::endl;
int main()
{
	vector<int> v2;
	for (int i = 0; i != 100; ++i)
		v2.push_back(i); // append sequential integers to v2

	string word;
	vector<string> text;
	while (cin >> word) {
		text.push_back(word);
	}

	return 0;
}

