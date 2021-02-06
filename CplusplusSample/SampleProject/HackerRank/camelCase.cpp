//int camelcase(string s) {
//    /*
//    number of words = Num uppercase + 1
//    number of characters in string = string.size
//    i range stringsize -> if uppercase -> num uppercase + 1
//    print num words
//
//    */
//    int numUppercase = 0;
//    int size = s.size();
//    int i = 0;
//    while (i <= size) {
//        if (isupper(s[i]) != 0) {
//            numUppercase = numUppercase + 1;
//        }
//        i++;
//    }
//    int numWord = numUppercase + 1;
//    return numWord;
//}
//
//int mainCamelCase()
//{
//    ofstream fout(getenv("OUTPUT_PATH"));
//
//    string s;
//    getline(cin, s);
//
//    int result = camelcase(s);
//
//    fout << result << "\n";
//
//    fout.close();
//
//    return 0;
//}
