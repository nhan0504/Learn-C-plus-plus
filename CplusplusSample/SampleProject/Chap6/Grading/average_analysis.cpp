//#include<vector>
//#include<numeric>
//#include<algorithm>
//#include "Student_info.h"
//#include "grade.h"
//#include "median.h"
//using namespace std;
//
//double average(const vector<double>& v) {
//	return accumulate(v.begin(), v.end(), 0.0) / v.size();
//}
//
//double average_grade(const vector<Student_info>& s) {
//	return grade(s.midterm, s.final, average(s.homework));
//}
//
//double average_analysis(const vector<Student_info>& students) {
//	vector<Student_info> grades;
//	transform(students.begin(), students.end(), back_inserter(grades), average_grade);
//	return median(grades);
//}