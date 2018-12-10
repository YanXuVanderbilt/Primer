#include <iostream>
typedef char *pstring;
char a = 'a';
const pstring cstr = &a ;
pstring cstr1 = 0;

int main()
{
	std::cout << cstr << std::endl;
}

