#include <iostream>
#include <vector>
using std::vector;using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	// vectors from 3_13
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<int> v6{10};
	vector<string> v7{10, "hi"};

	// solving problem from 3_16
	// v1
	cout << "Size of v1 is: " << v1.size() << endl;
	cout << "Content of v1 is: ";
	for (auto it = v1.begin(); it != v1.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	//v2
	cout << "Size of v2 is: " << v2.size() << endl;
	cout << "Content of v2 is: ";
	for (auto it = v2.begin(); it != v2.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	//v3
	cout << "Size of v3 is: " << v3.size() << endl;
	cout << "Content of v3 is: ";
	for (auto it = v3.begin(); it != v3.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	//v4
	cout << "Size of v4 is: " << v4.size() << endl;
	cout << "Content of v4 is: ";
	for (auto it = v4.begin(); it != v4.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	//v5
	cout << "Size of v5 is: " << v5.size() << endl;
	cout << "Content of v5 is: ";
	for (auto it = v5.begin(); it != v5.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	//v6
	cout << "Size of v6 is: " << v6.size() << endl;
	cout << "Content of v6 is: ";
	for (auto it = v6.begin(); it != v6.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	//v7
	cout << "Size of v7 is: " << v7.size() << endl;
	cout << "Content of v7 is: ";
	for (auto it = v7.begin(); it != v7.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
