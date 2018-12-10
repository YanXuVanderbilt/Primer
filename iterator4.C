#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	string content = "test test test test";
	string a = "";
	vector<string> text(4, content);
	text.push_back(a);
	text.push_back(content);

	for (int i = 0; i < text.size(); ++i)
	{
		for (int j = 0; j < text[i].size(); ++j)
		{
			text[i][j] = toupper(text[i][j]);
		}
	}

	for (auto it = text.cbegin();
			it != text.cend() && !it->empty(); ++it)
		cout << *it << endl;
	cout << a.empty() << endl;

	return 0;
}
