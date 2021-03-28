/*
Create output array int res[2]
compare if a[i] > b[i] -> res[1] +1
        else a[i] < b[i] -> res[2] +1
return res[1], res[2]
*/
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> res(2, 0);
    for (vector<int>::size_type i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            res[0]++;
        }
        else if (a[i] < b[i]) {
            res[1]++;
        }
    }
    return res;
}