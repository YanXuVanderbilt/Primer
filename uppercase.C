#include <iostream>
using std::cout; using std::endl; using std::string;
int main()
{
	string s("Hello World!!!");
	for (auto &c : s)
		c = toupper(c);
	cout << s << endl;
}
