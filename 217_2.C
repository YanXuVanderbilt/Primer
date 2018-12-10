#include <iostream>
using namespace std;
void print(int (&arr)[10])
{
	for (auto elem : arr)
		cout << elem << endl;
}

int main() {
int k[10] = {0,1,2,3,4,5,6,7,8,9};
print(k);
}

