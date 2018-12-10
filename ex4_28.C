#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	char c = 'a';
	const int integer = 1;
	const int &a = integer;
	char *p = &c;
	int i[10];
	string s = "string";
	vector<int> v(10);

	cout << "size of char is: " << (sizeof c) << endl;
	cout << "size of reference type is: " << (sizeof a) << endl;
	cout << "size of pointer is: " << (sizeof p) << endl;
	cout << "size of dereferenced pointer is: " << (sizeof *p) << endl;
	cout << "size of array is: " << (sizeof i) << endl;
	cout << "size of string is: " << (sizeof s) << endl;
	cout << "size of vector is: " << (sizeof v) << endl;
}
