#include <iostream>
using std::cout; using std::cin; using std::endl;
int main()
{
	for (const auto &s : text) {
		cout << s;
		if (s.empty() || s[s.size()-1] == '.')
			cout << endl;
		else 
			cout << " ";
	}
}
