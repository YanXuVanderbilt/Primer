#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;
string make_plural(size_t ctr, const string &word, const string &ending = "s") {
	return (ctr > 1) ? word + ending : word;
}
int main()
{
	string a = "success", b = "failure";
	cout << make_plural(2, a) << make_plural(2,b) << endl;
}

