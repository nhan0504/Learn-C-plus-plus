//#include<iostream>
//#include<ios>
//#include<iomanip>
//#include<vector>
//#include<algorithm>
//#include<vector>
//#include "median.h"
//#include "grade.h"
//#include "Student_info.h"
//using namespace std;
//
//int main() {
//	cout << "Please enter your first name: ";
//	string name;
//	cin >> name;
//	cout << "Hello, " << name << "!";
//
//	cout << "Please enter your midterm and final exam grades:";
//	double midterm, final;
//	cin >> midterm >> final;
//
//	cout << "Enter all your homework grades, followed by end-of-file: ";
//	vector<double> homework;
//
//	read_hw(cin, homework);
//	try {
//		double final_grade = grade(midterm, final, homework);
//		streamsize prec = cout.precision();
//		cout << "Your final grade is " << setprecision(3) << final_grade << setprecision(prec) << endl;
//	}
//	catch (domain_error) {
//		cout << endl << "You must enter your grades. Please try again" << endl;
//		return 1;
//	}
//	
//	vector<Student_info> students;
//	Student_info record;
//	string::size_type maxlen = 0;
//	while (read(cin, record)) {
//		maxlen = max(maxlen, record.name.size());
//		students.push_back(record);
//	}
//	sort(students.begin(), students.end(), compare);
//	for (vector<Student_info>::size_type i = 0; i != students.size(); i++) {
//		cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');
//		try {
//			double final_grade = grade(students[i]);
//			streamsize prec = cout.precision();
//			cout << setprecision(3) << final_grade << setprecision(prec);
//		}
//		catch (domain_error e) {
//			cout << e.what();
//		}
//		cout << endl;
//	}
//	return 0;
//}
