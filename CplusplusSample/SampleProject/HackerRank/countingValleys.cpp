//int countingValleys(int steps, string path) {
//    int size = path.size();
//    int valley = 0;
//    int mountain = 0;
//    int counter = 0;
//    for (int i = 0; i < size; i++) {
//        if (counter == 0 && path[i] == 'D') {
//            valley++;
//        } else if (counter == 0 && path[i] == 'U') {
//            mountain++;
//        }
//        if (path[i] == 'D') {
//            counter++;
//        }
//        else {
//            counter--;
//        }
//    }
//    cout << "mountain = " << mountain << endl;
//    return valley;
//}