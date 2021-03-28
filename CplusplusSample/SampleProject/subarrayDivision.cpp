/*
iterator i, j
i = begin
j = i + 1
count = 0
sum = 0
while i != end - 1
    while j - i != m && j != end - 1
        sum of i to j
        j++
    if sum = d -> count++
    else -> i++
            j = i + 1
return count
*/
int birthday(vector<int> s, int d, int m) {
    vector<int>::iterator i, j;
    i = s.begin();
    j = i + 1;
    int count = 0;
    int sum = 0;
    while (i != s.end()) {
        sum = *i;
        while (j != s.end() && (j - i) != m) {
            sum += *j;
            j++;
        }
        i++;
        if (sum == d) {
            count++;
        }
        else if (j != s.end()) {
            j = i + 1;
        }
    }
    return count;
}
