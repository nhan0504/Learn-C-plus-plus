//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string ltrim(const string&);
//string rtrim(const string&);
//
//string dayOfProgrammer(int year) {
//
//    /*
//    Compare y to 1918 -> y < 1918 -> Julian
//                      -> y >1918 -> Gregorian
//                      -> y =1918 -> 256th day: 27th Sep
//    leap year? -> Julian -> mod4 = 0 -> leap -> Feb=29
//                           -> mod4 # 0         -> Feb=28
//                 -> Gregorian -> mod400 = 0 -> leap
//                              -> mod4 = 0 && mod100 # 0 -> leap
//    Day? -> leap: 12.09.year
//         -> not leap: 13.09.year
//    */
//    string day;
//    if (year < 1918) {
//        if (year % 4 == 0) {
//             12.09.year
//            day = "12.09." + to_string(year);
//            return day;
//        }
//        else {
//             13.09.year
//            day = "13.09." + to_string(year);
//            return day;
//        }
//    }
//    else if (year > 1918) {
//        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
//             12.09.year
//            day = "12.09." + to_string(year);
//            return day;
//        }
//        else {
//             13.09.year
//            day = "13.09." + to_string(year);
//            return day;
//        }
//    }
//    else if (year == 1918) {
//         26.09.1918  
//        day = "26.09.1918";
//        return day;
//    }
//    return " ";
//}
//
//
//int mainDayOfTheProgrammer()
//{
//    ofstream fout(getenv("OUTPUT_PATH"));
//
//    string year_temp;
//    getline(cin, year_temp);
//
//    int year = stoi(ltrim(rtrim(year_temp)));
//
//    string result = dayOfProgrammer(year);
//
//    fout << result << "\n";
//
//    fout.close();
//
//    return 0;
//}
//
//string ltrim(const string& str) {
//    string s(str);
//
//    s.erase(
//        s.begin(),
//        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//    );
//
//    return s;
//}
//
//string rtrim(const string& str) {
//    string s(str);
//
//    s.erase(
//        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//        s.end()
//    );
//
//    return s;
//}
//
//
//string dayOfProgrammer(int year) {
//    bool isLeap = false;
//    if (year == 1918) {
//        return "26.09.1918";
//    }
//    if (year < 1918) {
//        if (year % 4 == 0) {
//            isLeap = true;
//        }
//    }
//    else {
//        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
//            isLeap = true;
//        }
//    }
//    if (isLeap == true) {
//        return "12.09." + to_string(year);
//    }
//    return "13.09." + to_string(year);
//}