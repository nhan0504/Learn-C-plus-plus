/*
Calculate position of the apples
Push into vector applesPos
Calculate position of the oranges
Push into vector orangesPos
vector res(2, 0)
Compare applesPos to Sam's house range -> if s < pos < t -> res[0] + 1
Compare orangesPos to Sam's house range -> if s < pos < t -> res[1] + 1
return res

*/
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    vector<int> applesPos, orangesPos;
    for (vector<int>::iterator it = apples.begin(); it != apples.end(); it++) {
        int pos = a + *it;
        applesPos.push_back(pos);
    }
    for (vector<int>::iterator it = oranges.begin(); it != oranges.end(); it++) {
        int pos = b + *it;
        orangesPos.push_back(pos);
    }
    vector<int> res(2, 0);
    for (vector<int>::iterator it = applesPos.begin(); it != applesPos.end(); it++) {
        if (*it >= s && *it <= t) {
            res[0]++;
        }
    }
    for (vector<int>::iterator it = orangesPos.begin(); it != orangesPos.end(); it++) {
        if (*it >= s && *it <= t) {
            res[1]++;
        }
    }
    cout << res[0] << endl;
    cout << res[1] << endl;
}