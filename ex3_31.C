#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	int arr[10];
	for (size_t i = 0; i < 10; ++i) {
		arr[i] = i;
	}
	/**
	for (size_t i = 0; i < 10; ++i) {
		cout << arr[i] << " ";
	}
	**/
	int arr2[10];
	for (size_t i = 0; i < 10; ++i) {
		arr2[i] = arr[i];
	}

	vector<int> arr3;
	for (size_t i = 0; i < 10; ++i) {
		arr3.push_back(i);
	}
	vector<int> arr4 = arr3;
}
