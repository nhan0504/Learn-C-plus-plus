#include<string>
#include<iostream>
using namespace std;

int main() {
	string base(3, '=');
	string top = " +---+";
	cout << top << endl;
	cout << " o   |" << endl;
	cout << "/|\\  |" << endl;
	cout << "/ \\  |" << endl;
	cout << "    " << base;
}