#include<iostream>
#include<vector>
using std::vector; using std::string; using std::cout; using std::cin; using std::endl;
int main()
{
	string input;
	vector<string> inputs;
	while (cin >> input) {
		inputs.push_back(input);
	}
	/**
	vector<string> counted;
	int maxrec = 0;
	string maxword = " ";
	for (auto e : inputs) {
		int iscounted = 0;
		for (auto f : counted) {
			if (e == f) {
				iscounted = 1;
				break;
			}
		}
		if (!iscounted) {
			int rec = 0;
			for (auto f : inputs) {
				if (e == f) {
					++rec;
				}
			}
			if (rec >= maxrec) {
				maxrec = rec;
                                maxword = e;
			}
			counted.push_back(e);
		}
	}
	**/
        
	int maxocc = 0;
	string maxword = " ";
	for (int i = 0; i < inputs.size(); ++i)
	{
		string current_word = inputs[i];
		int current_occ = 0;
		for (int j = i; j < inputs.size(); j++)
		{
			if (inputs[j] == current_word) {
				++current_occ;
			}
			else {
				break;
			}
		}
		if (current_occ > maxocc) {
			maxocc = current_occ;
			maxword = current_word;
		}
		i+=(current_occ - 1);
	}
	cout << "The word " << maxword << " occured " << maxocc << " times." << endl;
}
		
