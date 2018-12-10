#include <iostream>
using std::cout; using std::cin; using std::string; using std::endl;

int main()
{
	string word;
	while (cin>> word) // read until end-of-file
		cout << word << endl; // write each word followed by a new line
	return 0;
}
