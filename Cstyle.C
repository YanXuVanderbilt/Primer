#include <iostream>
using std::string;
int main()
{
	string s("Hello World");
//	char *str = s;
	const char *str = s.c_str();
}

