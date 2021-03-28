/*
count = 0
sum = 0;
iterator i, j
i = begin
j = i + 1
while i != end
while (j != end) -> sum = *i + *j
                 -> check with condition sum % k == 0 -> count++
                 -> j++
i++
j = i + 1
return count
*/
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    vector<int>::iterator i = ar.begin();
    vector<int>::iterator j = i + 1;
    while (i != ar.end()) {
        while (j != ar.end()) {
            int sum = 0;
            sum = *i + *j;
            if (sum % k == 0) {
                count++;
            }
            j++;
        }
        i++;
        j = i + 1;
    }
    return count;
}