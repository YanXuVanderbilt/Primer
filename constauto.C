#include <iostream>
int main()
{
	int i = 0, &r = i;
	auto a = r;

	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;

	const auto f = ci;

	auto &g = ci;
	//auto &h= 42;
	
	const auto &j = 42;

	auto k = ci, &l = i;
	auto &m = ci, *p = &ci;
	
	i = 4;
	std::cout << ci << std::endl;
//	auto &n = i, *p2 = &ci;
        
	a = 42; // int
	b = 42; // const int;
	c = 42; // const int;
	d = 42; // int *
	e = 42; // const int *
	g = 42; // const int & 
}
