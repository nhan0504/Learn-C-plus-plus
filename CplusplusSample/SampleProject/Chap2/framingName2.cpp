//#include <iostream>
//#include <string>
//using std::cout;
//using std::endl;
//using std::string;
//using std::cin;
//int mainFramingName2()
//{
//	//Ask for person's name
//	cout << "Please enter your first name" << endl;
//	string name;
//	cin >> name;
//
//	//Build the message
//	string greeting = "Hello, " + name;
//
//	//Number of blank around the greeting
//	const int pad = 1;
//
//	//Number of rows to write
//	const int rows = pad * 2 + 3;
//
//	//Number of cols
//	const string::size_type cols = greeting.size() + pad * 2 + 2;
//
//	//Separate the output from the input
//	cout << endl;
//
//	//write the output
//	for (int r = 0; r != rows; ++r) {
//		string::size_type c = 0;
//		if (r == pad + 1 && c == pad + 1) {
//			cout << greeting;
//			c += greeting.size();
//		}
//		else {
//			if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
//				cout << "*";
//			}
//			else {
//				cout << " ";
//				++c;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}