int findDigits(int n) {
    int count = 0;
    string str = to_string(n);
    for (string::const_iterator it = str.begin(); it != str.end(); it++) {
        char ch = *it;
        int digit = ch - 48;
        if (digit != 0 && n % digit == 0) {
            count += 1;
        }
    }
    return count;
}