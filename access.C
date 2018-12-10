#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl; 
int main()
{
	string s1 = "a string", *p = &s1;
	auto n = s1.size();
	n = (*p).size();
	n = p->size();
}
