//string superReducedString(string s) {
//    bool remove = true;
//    while (remove == true) {
//        remove = false;
//        for (string::iterator iter = s.begin(); iter != s.end(); iter = iter) {
//            if (s.size() != 1 && (*iter) == (*(iter + 1))) {
//                s.erase(iter);
//                s.erase(iter);
//                remove = true;
//            }
//            else {
//                iter++;
//            }
//        }
//    }
//    if (s.empty()) {
//        return "Empty String";
//    }
//    return s;
//}