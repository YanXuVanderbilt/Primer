#include <iostream>
int main()
{
	int errNumb = 0;
	int *const curErr = &errNumb; // curERr will always point to errNumb
	const double pi = 3.14159;
	const double *const pip = &pi; // pip is a const pointer to a const object

//	*pip = 2.72; 
        if (*curErr) 
		*curErr = 0;
	}
}
