#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::cin; using std::string; using std::endl;
int main()
{
	vector<int> v3(10, 42);
	cout << "The vector's size is: " << v3.size() << endl;
	cout << "The vector's content are: ";
	for (auto e : v3)
		cout << e;
	cout << endl;
	
	return 0;
}
