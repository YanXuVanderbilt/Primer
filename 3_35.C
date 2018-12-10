#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	int arr[10];
	int *e = &arr[10];
	for (int *b = arr; b != e; ++b)
	{
		*b = 0;
	}
	for (int i = 0; i < 10; ++i) {
		cout << arr[i] << " ";
	}
}
