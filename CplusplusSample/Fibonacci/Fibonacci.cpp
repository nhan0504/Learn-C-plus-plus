#include <iostream>
#include<vector>
using namespace std;

int fibonacci_vector(int n) {
	vector<int> fibonacci(2,1);
	int i = 0;
	int a;
	while (i != n - 2) {
		a = fibonacci[i] + fibonacci[i + 1];
		fibonacci.push_back(a);
		i++;
	}
	return a;
}

int main()
{
	int n;
	while (true) {
		cout << "Input: ";
		cin >> n;
		cout << fibonacci_vector(n) << endl;
	}
	return 0;
}




