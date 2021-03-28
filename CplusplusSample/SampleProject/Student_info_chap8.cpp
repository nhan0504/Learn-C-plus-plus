#include "grade.h"

isstream& Student_info::read(istream& in) {
	in >> name >> midterm >> final;
	read_hw(in, homework);
	return in;
}
double Student_info::grade() const {
	return ::grade(midterm, final, homework);
}
bool compare(const Student_info& x, const Student_info& y) {
	return x.name() < y.name();
}