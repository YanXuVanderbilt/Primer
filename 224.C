#include <iostream>
using namespace std;

// return the plural version of word if ctr is greater than 1
string make_plural(size_t ctr, const string &word,
		               const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

// return a reference to the shoirter of two strings
const string &shorterString(const string &s1, const string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}
