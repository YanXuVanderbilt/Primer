#include <iostream>
using namespace std;
int main() 
{
	string text = "abcghijmn"; char sought = 'h';
	// text must be sorted
	// beg and end will denote the range we're searching
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg)/2; // original midpoint
	// while there are still elements to look at and we haven't yet found sought
	while (mid != end && *mid != sought) {
		if (sought < *mid) // is the element we want in the first half?
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg)/2;
	}
	cout << mid - beg << endl;
	return 0;
}

