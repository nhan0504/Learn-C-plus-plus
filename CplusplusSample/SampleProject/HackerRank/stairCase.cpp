//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Solve problem using while loop
//void staircase(int n) {
//    /*
//    n=4 -> row 1: n-1 spaces + 1 hastag
//        -> row 2: n-2 spaces + 2 hastag
//        -> row 3: n-3 spaces + 3 hastag = n-3 spaces + n-spaces
//        -> row 4: n-4 spaces + (n-spaces)hastag
//    i in range 1-n - > spaces = n - i, hastag = i
//    print (n-i) spaces: spaces(n-i, ' ');
//    print i hastag: hastag(i, '#');
//    */
//    int i = 1;
//    while (i <= n) {
//        string spaces(n - i, ' ');
//        string hastag(i, '#');
//        cout << spaces;
//        cout << hastag << endl;
//        i++;
//    }
//}
//
//// Solve problem using for loop
//void staircase(int n) {
//    /*
//    n=4 -> row 1: n-1 spaces + 1 hastag
//        -> row 2: n-2 spaces + 2 hastag
//        -> row 3: n-3 spaces + 3 hastag = n-3 spaces + n-spaces
//        -> row 4: n-4 spaces + (n-spaces)hastag
//    i in range 1-n - > spaces = n - i, hastag = i
//    print (n-i) spaces: spaces(n-i, ' ');
//    print i hastag: hastag(i, '#');
//    */
//    for (int i = 1; i <= n; i++) {
//        string spaces(n - i, ' ');
//        string hastag(i, '#');
//        cout << spaces;
//        cout << hastag << endl;
//    }
//
//}
