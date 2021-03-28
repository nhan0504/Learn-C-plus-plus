#include<string>
class Student_info {
public:
	std::string name() const {
		return n;
	}
	bool valid() const {
		return !homework.empty();
	}
	std::istream& read(std::istream&);

};