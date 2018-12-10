#include <iostream>
#include <vector>
#include <iterator>
using std::vector; using std::vector; using std::cout; using std::cin; using std::endl; using std::begin; using std::end;
int main()
{
	int arr[10];
	vector<int> result(begin(arr), end(arr));
}	
