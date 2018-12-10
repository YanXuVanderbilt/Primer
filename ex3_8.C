#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;
int main()
{
	string s = "teststring";
	string::size_type i = 0;
	while (i < s.size()) {
		s[i] = 'X';
		++i;
	}
	cout << s << endl;

	string t = "teststring";
	for (auto &c : t)
		c = 'X';
	cout << t << endl;
}
