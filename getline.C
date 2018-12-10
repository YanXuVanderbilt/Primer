#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	string line;
	// read line at time until end-of-file
	while (getline(cin, line))
		cout << line << endl;
	return 0;
}
