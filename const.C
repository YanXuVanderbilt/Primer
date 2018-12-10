#include <iostream>
int main()
{
	const int bufSize = 512;
	bufSize = 0; // error: attempt to werite to const object

	const std::string hi = "hello!"; // ok: initialized
//	const int i, j = 0; // erro: i is unitialized const
}
