#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	string input;
	cin >> input;
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, bCnt = 0, nCnt = 0, tCnt = 0;
	for (auto e : input) {
		if (e == 'a' || e == 'A') 
			++aCnt;
		if (e == 'e' || e == 'E')
			++eCnt;
		if (e == 'i' || e == 'I')
			++iCnt;
		if (e == 'o' || e == 'O')
			++oCnt;
		if (e == 'u' || e == 'U')
			++uCnt;
		if (e == ' ')
			++bCnt;
		if (e == '\n')
			++nCnt;
		if (e == '\t')
			++tCnt;
	}

	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	for (int i = 0; i < input.size() - 1; ++i) {
		if (input[i] == 'f') {
			if (input[i+1] == 'f') 
				++ffCnt;
			if (input[i+1] == 'l')
				++flCnt;
			if (input[i+1] == 'i')
				++fiCnt;
		}
	}
}
