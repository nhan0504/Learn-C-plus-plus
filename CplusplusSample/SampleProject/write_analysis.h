#ifndef GUARD_write_analysis_h
#define GUARD_write_analysis_h
#include "Student_info.h"
#include<vector>
using namespace std;
void write_analysis(ostream& out, const string& name, double analysis(const vector<Student_info>&),
	const vector<Student_info>& did, const vector<Student_info>& didnt);
#endif
