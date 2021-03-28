//#include<map>
//#include<string>
//#include<vector>
//#include<iostream>
//#include<cstdlib>
//#include "split_string(iter).h"
//using namespace std;
//map<string, vector<int> > xref(istream& in, vector<string> find_words(const string&) = split) {
//	string line;
//	int line_number = 0;
//	map<string, vector<int> > ret;
//	//read the next line
//	while (getline(in, line)) {
//		++line_number;
//		//break input line into word
//		vector<string> words = find_words(line);
//		//remember that each word occur on the current line
//		for (vector<string>::const_iterator it = words.begin(); it != words.end(); it++) {
//			ret[*it].push_back(line_number);
//		}
//	}
//	return ret;
//}
//
//int main() {
//	//cal xref using split by default
//	map<string, vector<int> > ret = xref(cin);
//
//	//write the result
//	for (map<string, vector<int> >::const_iterator it = ret.begin(); it != ret.end(); it++) {
//		//write the word
//		cout << it->first << "occur on line(s): ";
//
//		//follow by line number
//		vector<int>::const_iterator line_it = it->second.begin();
//		cout << *line_it;
//		++line_it;
//		while (line_it != it->second.end()) {
//			cout << ", " << *line_it;
//			++line_it
//		}
//		cout << endl;
//	}
//	return 0;
//}