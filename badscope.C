#include <iostream>
#include <string>
std::string s1 = "hello"; // s1 has global scope
int main()
{
	std::string s2 = "world"; // si has global scope
	// uses global s1; prints "hello world"
	std::cout << s1 << " " << s2 << std::endl;
	int s1 = 42; // s1 is local and hides global s1
	// users local s1; prints "42 world"
	std::cout << s1 << " " << s2 << std::endl;
	return 0;
}

