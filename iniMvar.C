#include <iostream>
int main()
{
	// ok: salary defined and initialized before it is used to initialize wage
	double salary = 9999.99,
	       wage(salary + 0.01);
	// ok: mix of initialized and uninitialized
	int interval,
	    month = 8, day = 7, year = 1955;
	// ok: both forms of initialization syntax used
	std::string title("C++ Primer, 4th Ed."),
		   publisher = "A-W";

	double price = 109.99, discount = 0.16;
// 	double sale_price = apply_discount(price, discount);
}

