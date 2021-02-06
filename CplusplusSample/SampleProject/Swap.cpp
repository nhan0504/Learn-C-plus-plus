//#include<iostream>
//#include<vector>
//using std::cout;
//using std::endl;
//using std::string;
//using std::out_of_range;
//using std::vector;
//void swap(int& a, int& b) {
//	int remember = a;
//	a = b;
//	b = remember;
//}
//
//void swapString(string& s1, string& s2) {
//	string hold = s1;
//	s1 = s2;
//	s2 = hold;
//}
//
//int divide(int a, int b) {
//	try {
//		a / b;
//	}
//	catch(domain_error){
//		cout << "Can't divide by 0";
//		return 1;
//	}
//	return a / b;
//}
//int index(int i, vector<int> nums) {
//	int result;
//	try {
//		result = nums[i];
//	}
//	catch (out_of_range& e) {
//		std::cerr << "invalid value" << e.what();
//	}
//	return result;
//}
//
//
//int main() {
//	int apple = 1;
//	int orange = 2;
//	swap(apple, orange);
//	cout << "apple = " << apple << endl;
//	cout << "orange = " << orange << endl;
//	string hello = "hello";
//	string world = "world";
//	swapString(hello, world);
//	cout << "hello = " << hello << endl;
//	cout << "world = "<< world << endl;
//	cout << divide(4, 0);
//	vector<int> nums = { 1,2,3 };
//	cout << index(3, nums);
//	std::vector<int> myvector(10);
//	try {
//		myvector.at(20) = 100;      // vector::at throws an out-of-range
//	}
//	catch (const std::out_of_range& oor) {
//		std::cerr << "Out of Range error: " << oor.what() << '\n';
//	}
//	return 0;
//	return 0;
//}
