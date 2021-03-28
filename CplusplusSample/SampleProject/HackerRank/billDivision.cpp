/*
calculate actual price = sum of element in bill - bill[k]
if sum = b -> cout <<  Bon Appetit
else cout << sum/2 - actual
*/
void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for (vector<int>::iterator it = bill.begin(); it != bill.end(); it++) {
        sum += *it;
    }
    int actual = (sum - bill[k]) / 2;
    if (actual == b) {
        cout << "Bon Appetit";
    }
    else {
        cout << (sum / 2) - actual;
    }
}