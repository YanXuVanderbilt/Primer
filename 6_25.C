#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	string result;
	for (int i = 0; i < argc; ++i) {
		result+=*argv;
		++argv;
	}

	cout << result << endl;
}
