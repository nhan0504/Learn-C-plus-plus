int minimumDistances(vector<int> a) {
    vector<int>::size_type i, j;
    i = 0;
    j = i + 1;
    int dis = 0;
    vector<int>::size_type size = a.size();
    int res = size - 1;
    bool match = false;
    while (i != size) {
        //find matching pair
        if (a[i] == a[j] && i != size) {
            cout << "a[" << i << "] = " << a[i] << endl;
            cout << "a[" << j << "] = " << a[j] << endl;
            match = true;
            dis = j - i;
            cout << "dis = " << dis;
            if (dis < res) {
                res = dis;
                cout << "res = " << res;
                i++;
                j = i + 1;
            }
        }
        else {
            cout << "a[" << i << "] = " << a[i] << endl;
            cout << "a[" << j << "] = " << a[j] << endl;
            j++;
        }
        //No match to a[i] -> move i++
        if (j = size) {
            i++;
            j = i + 1;
        }
    }
    if (match == true) {
        return res;
    }
    else {
        return -1;
    }
}