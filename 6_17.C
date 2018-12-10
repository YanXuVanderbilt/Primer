// they do not have the same type
// becuase in the fist function i do not need to change it
// but in the second function, i do
#include <iostream>
using namespace std;
bool contain_cap(const string &str) 
{
	int size = str.size();
	for (int i=0; i<size; ++i) 
	{
		if (isupper(str[i]))
		{
			return true;
		}
	}
	return false;
}

void to_lower(string &str) 
{
	int size = str.size();
	string result = "";
	for (int i=0; i<size; ++i)
		result+=tolower(str[i]);
	str = result;
}	
	
		
int main() {
	string a = "aBCd";
	to_lower(a);
	cout << a << endl;
}

