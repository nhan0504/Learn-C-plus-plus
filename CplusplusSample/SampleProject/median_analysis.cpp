//#include "Student_info.h"
//#include "grade.h"
//#include "median.h"
//#include<stdexcept>
//#include<vector>
//#include<algorithm>
//using namespace std;
//double grade_aux(const Student_info& s) {
//	try {
//		return grade(s);
//	}
//	catch(domain_error){
//		return grade(s.midterm, s.final, 0);
//	}
//}
//
//double median_analysis(const vector<Student_info>& student){
//	vector<double> grades;
//	transform(student.begin(), student.end(), back_inserter(grades), grade_aux);
//	return median(grades);
//}