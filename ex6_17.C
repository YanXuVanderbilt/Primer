#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;
int cap(const string& input) {
	for (auto e : input) {
		if (isupper(e)) {
			return 1;
		}
	}
	return 0;
}
void lower(const string& input) {
	for (auto e : input) {
		e = tolower(e);
	}
}

int main() {}
