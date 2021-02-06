//#include<string>
//#include<vector>
//#include<cctype>
//#include<iostream>
//using namespace std;
//vector<string> split(const string& s) {
//	vector<string> ret;
//	string::size_type i = 0;
//	while (i != s.size()) {
//		while (i != s.size() && isspace(s[i])) {
//			i++;
//		}
//		string::size_type j = i;
//		while (j != s.size() && !isspace(s[j])) {
//			j++;
//		}
//		if (i != j) {
//			ret.push_back(s.substr(i, j - i));
//			i = j;
//		}
//	}
//	return ret;
//}
//
////find max length function
//string::size_type width(const vector<string>& v) {
//	string::size_type maxlen = 0;
//	for (string::size_type i = 0; i != v.size(); i++) {
//		maxlen = max(maxlen, v[i].size());
//	}
//	return maxlen;
//}
//
////frame function
//vector<string> frame(const vector<string>& v) {
//	vector<string> ret;
//	string::size_type maxlen = width(v);
//	string border(maxlen + 4, '*');
//	ret.push_back(border);
//	for (vector<string>::size_type i = 0; i != v.size(); i++) {
//		ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");
//	}
//	ret.push_back(border);
//	return ret;
//}
//
////vertical concatenation function
//vector<string> vcat(const vector<string>& top, const vector<string>& bottom) {
//	vector<string> ret = top;
//	ret.insert(ret.end(), bottom.begin(), bottom.end());
//	return ret;
//}
////horizontal concatenation function
//vector<string> hcat(const vector<string>& left, const vector<string>& right) {
//	vector<string> ret;
//	string::size_type width1 = width(left) + 1;
//	vector<string>::size_type i = 0, j = 0;
//	while (i != left.size() || j != right.size()) {
//		string s;
//		if (i != left.size()) {
//			s = left[i++];
//			s += string(width1 - s.size(), ' ');
//		}
//		if (j != right.size()) {
//			s += right[j++];
//		}
//		ret.push_back(s);
//	}
//	return ret;
//}
//
//
//int main() {
//	string s;
//	while (getline(cin, s)) {
//		vector<string> v = split(s);
//		for (vector<string>::size_type i = 0; i != v.size(); i++) {
//			cout << v[i] << endl;
//		}
//	}
//	vector<string> 
//	
//	return 0;
//}