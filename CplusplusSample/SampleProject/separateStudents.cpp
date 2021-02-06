//#include "Student_info.h"
//#include "did_all_hw.h"
//#include "write_analysis.h"
//#include "median_analysis.h"
//#include<vector>
//#include<iostream>
//using namespace std;
//
//int main() {
//	vector<Student_info> did, didnt;
//	Student_info student;
//	while (read(cin, student)) {
//		if (did_all_hw(student)) {
//			did.push_back(student);
//		}
//		else {
//			didnt.push_back(student);
//		}
//		if (did.empty()) {
//			cout << "No student did all homework!" << endl;
//			return 1;
//		}
//		if (didnt.empty()) {
//			cout << "Every student did all homework!" << endl;
//			return 1;
//		}
//		write_analysis(cout, "median", median_analysis, did, didnt);
//		write_analysis(cout, "average", average_analysis, did, didnt);
//		write_analysis(cout, "median of homework turned in", optimistic_median_analysis, did, didnt);
//		return 0;
//	}
//}
//
