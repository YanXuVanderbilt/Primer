#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item item1, item_temp, sum;
	while (cin >> item1) {
		sum = item1;
		while (cin >> item_temp) {
			sum += item_temp;
		}
	}
	cout << sum << endl;
}
