#include <iostream>
#include<vector>
#include "Fibonacci.h"
using namespace std;

int fibonacci_vector(int n, vector<int> fibonacci) {
	int i = 0;
	int a;
	while (i != n - 2) {
		cout << "i = " << i << endl;
		a = fibonacci[i] + fibonacci[i + 1];
		cout << "a = " << a << endl;
		fibonacci.push_back(a);
		i++;
	}
	for (int j = 0; j != fibonacci.size(); j++) {
		cout << fibonacci[j] << "  ";
	}
	cout << endl;
	return fibonacci[(n - 1)];
}

int main()
{
	vector<int> fibonacci;
	fibonacci.push_back(1);
	fibonacci.push_back(1);
	int n;
	
	while (true) {
		cout << "Input: ";
		cin >> n;
		int a = fibonacci_vector(n, fibonacci);
		cout << a << endl;
	}
	return 0;
}




