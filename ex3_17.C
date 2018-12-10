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

	cout << result[1] << endl;


	return 0;
}
