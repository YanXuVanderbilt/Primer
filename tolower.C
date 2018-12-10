#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	string s("Hello World!!!");
	// convert s to lowercase
	for (string::size_type index = 0; index != s.size(); ++index)
		s[index] = tolower(s[index]);
	cout << s << endl;
}

