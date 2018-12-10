#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i = 1;
	int& j = i;

	cout << j << endl;
	
	return 0;
}
