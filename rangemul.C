#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	size_t cnt = 0;
	for (auto &row : ia)
		for (auto &col : row) {
			col = cnt;
			++cnt;
		}
}
