#include <iostream>
using namespace std;

void fibonacci_last_digit_fast(int n) {
    if (n <= 1)
        return n;
    int previous = 0;
    int current = 1;

    for (int i = 0; i < n - 1; ++i) {
        int temp_previous = previous;
        previous = current;
        current = (temp_previous + current) % 10;
        cout << current << '\n';
    }
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci_last_digit_fast(n);
}
