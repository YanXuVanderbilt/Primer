#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;
int main()
{
	string input = "teststring";
	for  (char &c : input)
		 c = 'X';
	cout << input << endl;
}
