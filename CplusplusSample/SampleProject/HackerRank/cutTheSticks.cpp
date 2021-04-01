/*
vector res
while (arr.size != empty)
    min = 0;
    for (it = arr.begin, it != arr.end; it++)
        if *it < min -> min = *it
    count number of stick left
    count = 0
    for run through arr
        *i - min
        if *i != 0 -> count++
                      i++
        else erase(i)
    res push back (count)
return res
*/
vector<int> cutTheSticks(vector<int> arr) {
    vector<int> res;
    int size = arr.size();
    res.push_back(size);
    while (!arr.empty()) {
        int min = arr[0];
        for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
            if (*it < min) {
                min = *it;
            }
        }
        int count = 0;
        vector<int>::iterator it = arr.begin();
        while (it != arr.end()) {
            *it = *it - min;
            if (*it != 0) {
                count++;
                it++;
            }
            else {
                arr.erase(it);
            }
        }
        int size = arr.size();
        if (count != 0) {
            res.push_back(count);
        }
    }
    return res;
}