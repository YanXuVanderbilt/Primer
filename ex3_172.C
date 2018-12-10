#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::cin; using std::string; using std::endl;
int main()
{
	string input;
	vector<string> result;
	while (cin >> input)
		result.push_back(input);
	for (string s : result){
		for (char &c : s)
			c = toupper(c);
	}

	// printing starts here
	int mod = 0; // mod = index / 8
	int index = 0;
	string::size_type length = result.size();
	while (index < length) {
		while (mod == index/8) {
			cout << result[index] << " ";
			++index;}
		++mod;
		cout << endl;
	}


	return 0;
}
