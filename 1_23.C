#include <iostream>
#include "Sales_item.h"
using namespace std;
int main() 
{
	Sales_item item1, item2, item3;
	while (cin >> item1 >> item2 >> item3) {
		if (item1.isbn() == item2.isbn() && item2.isbn() == item3.isbn()) {
			cout << item1 + item2 + item3 << endl;
			return 0;
		}
		else {
			if (item1.isbn() == item2.isbn()) {
				cout << item1 + item2 << endl;
				cout << item3 << endl;
			}
			else if (item1.isbn() == item3.isbn()) {
				cout << item1 + item3 << endl;
				cout << item2 << endl;
			}
			else if (item2.isbn() == item3.isbn()) {
				cout << item2 + item3 << endl;
				cout << item1 << endl;
			}
			else {
				cout << item1 << endl;
				cout << item2 << endl;
				cout << item3 << endl;
			}
			return 0;
		}
	}
}




