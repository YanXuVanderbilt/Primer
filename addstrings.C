#include <iostream>
using std::string; using std::cout; using std::endl;

int main()
{
	string s1 = "hello, ", s2 = "world\n";
	string s3 = s1 + s2; // s2 is hello, world\n
	s1 += s2; // equivalent to s1 = s1 + s2;
	cout << "s1 is: " << s1 << endl;
	cout << "s3 is: " << s3 << endl;
}
