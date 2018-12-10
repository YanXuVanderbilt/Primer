#include <iostream>
using std::string; using std::cout; using std::endl;

int main()
{
	string s("some string");
	if (!s.empty())
		s[0] = toupper(s[0]);

	for (decltype(s.size()) index = 0;
			index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]); 

	cout << s << endl;
}
