#include <iostream>
using std::cout; using std::cin; using std::string; using std::endl;

int main()
{
	while (getline(cin, line))
		if (!line.empty())
			cout << line << endl;
}
