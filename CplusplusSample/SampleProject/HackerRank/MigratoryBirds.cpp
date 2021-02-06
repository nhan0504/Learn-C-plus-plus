//int migratoryBirds(vector<int> arr) {
//    vector<int> numberOfBirds(6, 0);
//    int size = arr.size();
//    for (int i = 0; i < size; i++) {
//        if (arr[i] == 1) {
//            numberOfBirds[1] += 1;
//        }
//        if (arr[i] == 2) {
//            numberOfBirds[2] += 1;
//        }
//        if (arr[i] == 3) {
//            numberOfBirds[3] += 1;
//        }
//        if (arr[i] == 4) {
//            numberOfBirds[4] += 1;
//        }
//        if (arr[i] == 5) {
//            numberOfBirds[5] += 1;
//        }
//    }
//    int size1 = numberOfBirds.size();
//    int max = numberOfBirds[size1 - 1];
//    int maxpos = 0;
//    for (int i = size1 - 1; i != 0; i--) {
//        if (max <= numberOfBirds[i]) {
//            max = numberOfBirds[i];
//            maxpos = i;
//        }
//    }
//    return maxpos;
//}