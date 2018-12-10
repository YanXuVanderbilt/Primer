#include <iostream>
int main()
{
//	const int *p = nullptr;
//	constexpr int *q = nullptr;

	constexpr int *np = nullptr;

	const int a = 0;
	constexpr int b = 42;

	int &i = a;
	constexpr int &j = b;

	constexpr const int *p = &i;
	constexpr int *p1 = &j;

}
