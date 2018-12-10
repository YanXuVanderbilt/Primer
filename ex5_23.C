#include <iostream>
#include <stdexcept>
using std::cout; using std::cin; using std::endl; using std::range_error;
int main()
{
	int int1, int2;
	cin >> int1 >> int2;
	int finished = 0;
	while (finished != 1) {
		try {
			if (int2 == 0) {
			throw range_error("Divide by 0");
			}
			double result = (int1 + 0.0) / int2;
	                cout << result << endl;
			finished = 1;
		} catch (range_error err) {
			cout << "Divide by 0. Answer is infinity." << endl;
			cout << "Input a new number.";
			cin >> int2;
		}
	}
}
