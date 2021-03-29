string hackerrankInString(string s) {
    string::iterator i, j;
    i = s.begin();
    string h = "hackerrank";
    j = h.begin();
    while (i != s.end() && j != h.end()) {
        if (*i == *j) {
            i++;
            j++;
        }
        else {
            i++;
        }
    }
    if (j == h.end()) {
        return "YES";
    }
    else {
        return "NO";
    }
}