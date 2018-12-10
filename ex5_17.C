#include <iostream>
#include <vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	vector<int> vec1 = {1,3,5};
	vector<int> vec2 = {1,3,4};
	int result;
	if (vec1.size() == vec2.size()) {
		for (int i = 0; i < vec1.size(); ++i) {
			if (vec1[i] != vec2[i]) {
				result = 0;
				break;
			}
			result = 1;
		}
	}
	else {
		int small_size;
		if (vec1.size() < vec2.size()) {
			small_size = vec1.size();
		}
		else {
			small_size = vec2.size();
		}
		for (int i = 0; i < small_size; ++i) {
			if (vec1[i] != vec2[i]) {
				result = 0;
				break;
			}
			result = 1;
		}
	}
	cout << result << endl;
			       	       
}
