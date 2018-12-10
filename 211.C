#include <iostream>
using namespace std;
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
	auto ret = s.size(); // position of the first occurrence, if any
	occurs = 0; // set the occurence count parameter
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // remember the first occurrence of c
			++occurs;
		}
	}
	return ret; // count is returned implicitly in occurs
}
int main () {
	string s = "abcdedfabcdefg";
	string::size_type ctr = 0;
	auto index = find_char(s, 'a', ctr);
	cout << index << " " << ctr << endl;
}
