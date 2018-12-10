#include <iostream>
int i = 4;
int *r = &i;

char j = 'a';
char *s = &j;

int main() 
{
	std::cout << *s << std::endl;
}

