//int makeAnagram(string a, string b) {
//    map<char, int> freq_a;
//    map<char, int> freq_b;
//    int size_a = a.size();
//    for (int i = 0; i < size_a; i++) {
//        if (freq_a.find(a[i]) == freq_a.end()) {
//            freq_a[a[i]] = 1;
//        }
//        else {
//            freq_a[a[i]] ++;
//        }
//    }
//
//    int size_b = b.size();
//    for (int i = 0; i < size_b; i++) {
//        if (freq_b.find(b[i]) == freq_b.end()) {
//            freq_b[b[i]] = 1;
//        }
//        else {
//            freq_b[b[i]] ++;
//        }
//    }
//        // iterate through map 1
//        for (map<char, int>::iterator it = freq_a.begin(); it != freq_a.end(); it++) {
//            // check if key in a is also in b
//            if (freq_b.find(it->first) != freq_b.end()) {
//                // True -> Add diff between values
//                answer += abs(it->second - freq_b[it->first]);
//            }
//                // False -> Add value of key in a
//            answer += it->second;
//        }
//        // iterate through map 2
//        for (map<char, int>::iterator it = freq_b.begin(); it != freq_b.end(); it++) {
//            // check if key b is not in a
//            if (freq_a.find(it->first) == freq_a.end()) {
//                // Add value of key in b
//                answer += it->second;
//            }
//        }
//    }
//    return answer;
//}
//
///*
//same key + diff value -> answer + diff between values
//same key + same value -> answer
//diff key -> answer + value1 + value2
//Key in a is also in b? -> True -> Answer + abs diff between values
//                       -> False -> Answer + valueA
//Key in b is also in a? -> True -> Move on
//                       -> False -> Answer + Value
//map1: {"i": 1}, {"c": 1}
//map2: {"f": 1}, {"c": 3}
//*/
//
//int makeAnagram(string a, string b) {
//    map<char, int> freq_a;
//    map<char, int> freq_b;
//    int answer = 0;
//
//    int size_a = a.size();
//    for (int i = 0; i < size_a; i++) {
//        if (freq_a.find(a[i]) == freq_a.end()) {
//            freq_a[a[i]] = 1;
//        }
//        else {
//            freq_a[a[i]] ++;
//        }
//    }
//
//    int size_b = b.size();
//    for (int i = 0; i < size_b; i++) {
//        if (freq_b.find(b[i]) == freq_b.end()) {
//            freq_b[b[i]] = 1;
//        }
//        else {
//            freq_b[b[i]] ++;
//        }
//    }
//
//    for (map<char, int>::iterator it = freq_a.begin(); it != freq_a.end(); it++) {
//        if (freq_b.find(it->first) != freq_b.end()) {
//            answer += abs(it->second - freq_b[it->first]);
//        }
//        else {
//            answer += it->second;
//        }
//    }
//    for (map<char, int>::iterator it = freq_b.begin(); it != freq_b.end(); it++) {
//        if (freq_a.find(it->first) == freq_a.end()) {
//            answer += it->second;
//        }
//    }
//    return answer;
//}