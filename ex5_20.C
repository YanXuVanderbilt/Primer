#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	string input;
	string pre_input = " ";
	int repeat = 0;
	while (cin >> input) {
		if (input == pre_input) {
			repeat = 1;
			break;
		}
		pre_input = input;
	}
	if (repeat) {
		cout << input << " occured twice in succession" << endl;
	}
	else {
		cout << "No word is repeated." << endl;
	}
}
