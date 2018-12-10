#include <iostream>;
#include <vector>;
using std::cout; using std::string; using std::vector; using std::endl;
int main()
{
	vector<int> v1(10); // v1 has ten elements with value 0
	vector<int> v2{10}; // v2 has one element with value 10
	vector<int> v3(10, 1); // v3 has ten elements with value 1
	vector<int> v4{10, 1}; // v4 has two elements with values 10 and 2

	cout << "v1 is: " << v1 << "\nv2 is: " << v2 << "\nv3 is: " << v3 << "\nv4 is: " << v4 << endl;
	
	return 0;
}
