#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	string s("some string");
	if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
	}

	cout << s << endl;
}
