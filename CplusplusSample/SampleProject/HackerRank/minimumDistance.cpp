/*
int i, j
i = 0
j = i + 1
int size = a.size
int dis = 0;
int res;
while (i != size && j != size)
    if (a[i] == a[j]){
        dis = j - i;
        if (dis < res) -> res = dis
        i++
        j = i + 1
    }
    else -> j++
return res
*/
int minimumDistances(vector<int> a) {
    vector<int>::size_type i, j;
    i = 0;
    j = i + 1;
    int dis = 0;
    vector<int>::size_type size = a.size();
    vector<int>::size_type res = size - 1;
    bool match = false;

    while (j != size && i != size) {
        if (a[i] == a[j] && i != size - 1) {
            match = true;
            dis = j - i;
            if (dis < res) {
                res = dis;
            }
            cout << "res = " << res;
            i++;
            j = i + 1;
        }
        else if (a[i] != a[j] && j == size - 1 && i != size - 1) {
            i++;
            j = i + 1;
        }
        else if (a[i] != a[j]) {
            j++;
        }
    }

    if (match == true) {
        return res;
    }
    else {
        return -1;
    }
}