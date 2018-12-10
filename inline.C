#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;
inline const string& shorterString(const string &s1, const string &s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}
int main()
{
	string a = "Test", b = "test";
	cout << shorterString(a,b) << endl;
}
