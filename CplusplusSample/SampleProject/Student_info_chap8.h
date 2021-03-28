#ifndef GUARD_Student_info_chap8_h
#define GUARD_Student_info_chap8_h
#include<string>
#include<vector>
#include "grade.h"
class Student_info {
public:
	std::string name() const {
		return n;
	}
	bool valid() const {
		return !homework.empty();
	}
	std::istream& read(std::istream&);
	double grade() const;
private:
	std::string n;
	double midterm, final;
	std::vector<double> homework;
};
bool compare(const Student_info&, const Student_info&);
#endif
