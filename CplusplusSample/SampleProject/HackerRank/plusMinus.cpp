void plusMinus(vector<int> arr) {
    float positive = 0;
    float negative = 0;
    float zero = 0;
    for (vector<int>::const_iterator it = arr.begin(); it != arr.end(); it++) {
        if (*it > 0) {
            positive += 1;
        }
        else if (*it < 0) {
            negative += 1;
        }
        else if (*it == 0) {
            zero += 1;
        }
    }
    int size = arr.size();
    cout << setprecision(6) << positive / size << endl
        << negative / size << endl
        << zero / size << setprecision(cout.precision());
}