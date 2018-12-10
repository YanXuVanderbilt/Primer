#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	string str("some string");
	for (string::size_type ix = 0; ix != str.size(); ++ix)
		cout << str[ix] << endl;
	for (string::size_type ix = 0; ix != str.size(); ++ix)
		str[ix] = 'x';
	cout << str << endl;
}

