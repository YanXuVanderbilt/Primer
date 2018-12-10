//the program still works
#include <iostream>
int main()
{
	//  currVal is the number we're counting; we'll read new values into val
	int currVal = 0, val = 0;
	//  read first number and ensure that we have data to precess
	if (std::cin >> currVal) {
		int cnt = 1;  //  store the count for the current value we're processing
		while (std::cin >> val) {  // read the remaining numbers
			//std::cout << val << " read." << std::endl;
			if (val == currVal) { // if the values are the same
				++cnt;
			}
			else { // otherwise, print the count for the previous value
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;  // remember the new value
				cnt = 1; // reset the counter
			}
		}	
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	} // outermost if statement ends here
	return 0;
}
