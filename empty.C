#include <iostream>
using std::cout; using std::cin; using std::string; using std::endl;

int main()
{
	string line;
	while (getline(cin, line))
		if (line.size() > 80)
			cout << line << endl;
}
