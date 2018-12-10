#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	int input;
	vector<int> v1;
	while (cin >> input) {
		v1.push_back(input);
	}
/**
	for (int i = 0; i < v1.size() - 1; ++i) {
		cout << v1[i] + v1[i+1] << " "; }
	cout << endl;
	**/

	for (int i = 0; i < (v1.size() + 1)/2; ++i) {
		cout << v1[i] + v1[v1.size() -1 - i] << " ";}
	cout << endl; 
