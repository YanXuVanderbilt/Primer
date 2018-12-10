#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
int main()
{
	 string input;
	 vector<string> result;
	 while (cin >> input)
		 result.push_back(input);
	 cout << result[1] << endl;

	 return 0;
}

