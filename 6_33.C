#include <iostream>
#include <vector>
using namespace std; 

void print_content(vector<int> &a, int index)
{
	if (index == 0)
		cout << a[0] << " ";
	else 
	{
		print_content(a, index-1);
		cout << a[index] << " ";
	}
}

int main() 
{
	vector<int> a = {1, 3, 5, 7};
	print_content(a, 3); cout << endl;
}

