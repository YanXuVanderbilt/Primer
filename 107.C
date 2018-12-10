#include <iostream>
using namespace std;
int main() 
{
	string s("some string");
	if (s.begin() != s.end()) { // make sure s is not empty
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout << s << endl;
}
