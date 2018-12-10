#include <iostream>
using std::string;
int main()
{
	int grade = 95;
	string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
}
