#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;
int main() {
	string str1, str2;
	do {
		cin >> str1 >> str2;
		string lesser, greater;
		if (str1 < str2) {
			lesser = str1;
			greater = str2;
		}
		else {
			lesser = str2;
			greater = str1;
		}
		cout << lesser << " is less than " << greater << endl;
	} while (cin);
}
