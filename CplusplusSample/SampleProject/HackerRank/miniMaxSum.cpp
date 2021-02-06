///*
//sort in nondecreasing order
//Min = sum + first 4 numbers
//Max = sum + last 4 numbers
//*/
//void miniMaxSum(vector<int> arr) {
//    long miniSum = 0;
//    long maxSum = 0;
//    sort(arr.begin(), arr.end());
//    for (int i = 0; i != 4; i++) {
//        miniSum += arr[i];
//    }
//    for (int i = 1; i != 5; i++) {
//        maxSum += arr[i];
//    }
//    cout << miniSum << " " << maxSum;
//}