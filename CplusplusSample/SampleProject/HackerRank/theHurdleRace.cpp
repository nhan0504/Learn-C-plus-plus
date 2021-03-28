/*
find max
return max - k
*/
int hurdleRace(int k, vector<int> height) {
    int max = 0;
    for (vector<int>::iterator it = height.begin(); it != height.end(); it++) {
        if (*it > max) {
            max = *it;
        }
    }
    if (max > k) {
        return max - k;
    }
    return 0;
}