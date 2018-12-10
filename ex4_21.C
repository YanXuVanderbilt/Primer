#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::cin; using std::endl;
int main()
{
	vector<int> vec = {1,2,3,4,5,6,7,8};
	for (auto i = 0; i < vec.size(); ++i) {
		cout << "vec[" << i << "] is changed from " << vec[i] << "to ";
		 (vec[i]%2 == 1) ? vec[i]*=2 : vec[i]*=1;
		 cout << vec[i] << endl;
	}
	for (auto e : vec) {
		cout << e << " ";
	}
	cout << endl;
}
