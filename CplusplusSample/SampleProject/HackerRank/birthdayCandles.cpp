////solve using sort
///*
//sort array in nondecreasing order
//int numberOfCandles
//compare last numer to previous number -> Equal -> numberOfCandles += 1
//                                      -> Not equal ->
//*/
//int birthdayCakeCandles(vector<int> candles) {
//    long numberOfCandles = 1;
//    sort(candles.begin(), candles.end());
//    int size = candles.size();
//    int i = size - 1;
//    if (size == 1) {
//        return numberOfCandles;
//    }
//    while (i >= 1 && candles[i] == candles[i - 1]) {
//        numberOfCandles += 1;
//        i--;
//    }
//    return numberOfCandles;
//}
//
////solve with less run time
//int birthdayCakeCandles(vector<int> candles) {
//    int numberOfCandles = 1;
//    long max = candles[0];
//    long size = candles.size();
//    for (int i = 1; i <= size - 1; i++) {
//        if (max < candles[i]) {
//            max = candles[i];
//            numberOfCandles = 1;
//        }
//        else if (max == candles[i]) {
//            numberOfCandles++;
//        }
//    }
//    return numberOfCandles;
//}