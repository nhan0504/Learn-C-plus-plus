#include<string>
#include<vector>
#include "Student_info.h"
using namespace std;

bool compare(const Student_info& x, const Student_info& y) {
	return x.name < y.name;
}
istream& read(istream& is, Student_info& s) {
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework);
	return is;
}

//read from an input stream
istream& read_hw(istream& in, vector<double>& hw) {
	if (in) {
		//clear previous content
		hw.clear();
		//read homework grade
		double x;
		while (in >> x) {
			hw.push_back(x);
			//reset error state
			in.clear();
		}
	}
	return in;
}