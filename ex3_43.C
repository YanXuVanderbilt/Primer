#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	int ia[3][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
/**
	for (const int(&row)[4]: ia)
		for (auto col : row)
			cout << col << endl;}
			
 
        using int_array = int[4];
	for (int_array *p = ia; p != ia + 3; ++p) {
		for (int *q = *p; q != *p + 4; ++q)
			cout << *q << ' ';
		cout << endl;
	}
	**/

        for (const auto &row : ia) {
		for (auto col : row)
			cout << col << endl;
	}
}
