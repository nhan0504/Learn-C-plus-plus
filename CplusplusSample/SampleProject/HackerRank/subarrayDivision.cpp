/*
int i = 0
int j = 0
int sum = 0
int count = 0
while i != size
    while j - i != m
        sum += s[j]
        j++
    if sum == d -> count++
    i++
    j = i
return count
*/
int birthday(vector<int> s, int d, int m) {
    vector<int>::size_type i, j, size;
    i = 0;
    j = 0;
    size = s.size();
    int sum = 0;
    int count = 0;
    while (i != size) {
        while ((j - i) != m) {
            sum += s[j];
            j++;
        }
        if (sum == d) {
            count++;
        }
        sum = 0;
        i++;
        j = i;
    }
    return count;
}