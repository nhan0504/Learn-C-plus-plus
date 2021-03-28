#include<string>
#include<string>
#include<iterator>
#include<iostream>
using namespace std;
bool space(char c)
{
	return isspace(c);
}

// false if the argument is whitespace, true otherwise
bool not_space(char c)
{
	return !isspace(c);
}
template <class Out>
void split(const string& str, Out os) {
	typedef string::const_iterator iter;
	iter i = str.begin();
	while (i != str.end()) {
		// ignore leading blanks
		i = find_if(i, str.end(), not_space);
		// find the end of next word
		iter j = find_if(i, str.end(), space);
		// copy the character in [i, j)
		if (i != str.end()) {
			*os++ = string(i, j);
		}
		i = j;
	}
}

int main() {
	string s;
	while (getline(cin, s)) {
		split(s, ostream_iterator<string>(cout, "\n"));
	}
}