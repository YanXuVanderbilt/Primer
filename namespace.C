#include <string>
#include <iostream>

using std::cin;
using std::string;

int main()
{
	string s; // ok: string is now a synonym for std::string
	cin >> s; // ok: cin is now a synnonym for std::cin
	cout << s; // error: no using declaration; we must tell the full name
	std::cout << s; // ok: explicitly use count room namespace std
}
