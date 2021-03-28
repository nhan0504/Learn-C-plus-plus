///*
//vector<int> current_subarray
//sort a
//length = 0
//Read first 2 number -> Abs <= 1 -> Push back 1st number
//Read 2 numbers at a time -> Compare with 1st number in current_subarray -> Abs <= 1 -> Push back
//    + Abs <= 1 -> Push back 2nd number into current_subarray
//    + Else     -> if current_subarray not empty -> Save current_subarray into subarray_collection + Check length: if current_subarray size > length 
//               -> length = current_subarray size + Clear current_subarray
//*/
//
//int pickingNumbers(vector<int> a) {
//    vector<int> current_subarray;
//    int maxLength = 0;
//    sort(a.begin(), a.end());
//    if (abs(a[0] - a[1]) <= 1) {
//        current_subarray.push_back(a[0]);
//    }
//    int k = 1;
//    for (vector<int>::iterator i = a.begin() + 1; i != a.end(); i++) {
//        cout << "a[" << k++ << "] =" << *i << endl;
//        if (!current_subarray.empty()) {
//            if (abs(*i - current_subarray[0]) <= 1) {
//                cout << "push = " << *i << endl;
//                current_subarray.push_back(*i);
//                if (i == a.end() - 1) {
//                    if (current_subarray.size() > maxLength) {
//                        maxLength = current_subarray.size();
//                    }
//                }
//            }
//            else {
//                if (current_subarray.size() > maxLength) {
//                    maxLength = current_subarray.size();
//                }
//                current_subarray.clear();
//                current_subarray.push_back(*i);
//            }
//        }
//        else {
//            if (i != a.end() - 1 && abs(*i - *(i + 1)) <= 1) {
//                current_subarray.push_back(*i);
//            }
//        }
//    }
//    return maxLength;
//}
//
////Using count
//int pickingNumbers(vector<int> a) {
//    int count = 0;
//    int maxLength = 0;
//    sort(a.begin(), a.end());
//    vector<int>::iterator start = a.begin();
//    vector<int>::iterator stop = a.begin() + 1;
//    while (stop != a.end()) {
//        if (abs(*stop - *start) <= 1) {
//            count++;
//            if (count > maxLength) {
//                maxLength = count;
//            }
//        }
//        else {
//            cout << endl;
//            start = stop;
//            if (count > maxLength) {
//                maxLength = count;
//            }
//            count = 0;
//        }
//        stop++;
//    }
//    return maxLength + 1;
//}
//
///*
//Create map <int, int> Key: number
//                      Value: Frequency
//Iterate through vector<int> a -> Find frequency of each number
//                                map[s]++;
//maxLength = 0;
//iterate through map -> if freq[s] + freq[s+1] > freq[s] + freq[s-1]
//                            -> maxLength = if freq[s] + freq[s+1]
//                        else -> maxLength = if freq[s] + freq[s-1]
//it++
//return maxLength
//*/
//
//int pickingNumbers(vector<int> a) {
//    map<int, int> freq;
//    for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
//        freq[*it]++;
//    }
//    int sum = 0;
//    int maxLength = 0;
//    for (map<int, int>::iterator it = freq.begin(); it != freq.end(); it++) {
//        const int& s = it->first;
//        if (freq.find(s + 1) != freq.end() && freq.find(s - 1) != freq.end()) {
//            if (freq[s + 1] >= freq[s - 1]) {
//                sum = freq[s + 1] + freq[s];
//            }
//            else {
//                sum = freq[s - 1] + freq[s];
//            }
//            if (sum > maxLength) {
//                maxLength = sum;
//            }
//        }
//        else if (freq.find(s + 1) != freq.end()) {
//            sum = freq[s + 1] + freq[s];
//            if (sum > maxLength) {
//                maxLength = sum;
//            }
//        }
//        else if (freq.find(s - 1) != freq.end()) {
//            sum = freq[s - 1] + freq[s];
//            if (sum > maxLength) {
//                maxLength = sum;
//            }
//        }
//    }
//    return maxLength;
//}