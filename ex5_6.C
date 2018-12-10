#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	int grade;
	string lettergrade;
	(grade == 100) ? lettergrade = "A++" : (grade >= 98) ? lettergrade = "A+" : (grade >= 93) ? lettergrade = "A" : \
		(grade >= 90) ? lettergrade = "A-" : (grade >= 80) ? lettergrade = "B" : (grade >70) ? lettergrade = "C" :\
		(grade >= 60) ? lettergrade = "D" : lettergrade = "F";
	cout << lettergrade << endl;
}
