#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;
int main()
{
	int grade = 95;
	string finalgrade;
	finalgrade = (grade < 90) ? "higher pass" : (grade <= 75) ? "loa pass" : (grade < 60) ? "fail" : "pass";
}
