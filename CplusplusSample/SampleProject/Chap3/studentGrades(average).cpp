//#include <iomanip>
//#include <ios>
//#include <iostream>
//#include <string>
//using std::cin; using std::setprecision;
//using std::cout; using std::string;
//using std::endl; using std::streamsize;
//int main()
//{
//	//Ask for student's name
//	cout << "Please enter your first name: ";
//	string name;
//	cin >> name;
//	cout << "Hello, " << name << "!" << endl;
//
//	//Ask for and read midterm and final grade
//	cout << "Please enter your midterm and final exam grades: ";
//	double midterm, final;
//	cin >> midterm >> final;
//
//	//Ask for homework's grade
//	cout << "Enter all your homework grades, followed by end-of-file: ";
//	int count = 0;
//	double sum = 0;
//	double x;
//	while (cin >> x) {
//		++count;
//		sum += x;
//	}
//	streamsize prec = cout.precision();
//	cout << "Your final grade is " << setprecision(3)
//		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
//		<< setprecision(prec) << endl;
//	return 0;
//}