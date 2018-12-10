#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<string> text = {"text1", "text2", "text3", "text4", "", "text5"};
	for (auto it = text.cbegin();
			it != text.cend() && !it->empty(); ++it)
		cout << *it << endl;
}

