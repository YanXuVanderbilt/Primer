#include <iostream>
using namespace std;
void print1(const int *begin, const int *end)
{
	while (begin != end)
		cout << *begin++ << " ";
	cout << endl;
}

int main()
{
	int i = 1, j[2] = {0, 1};
	print1(&i, (&i)+1);
	print1(begin(j), end(j));
}

