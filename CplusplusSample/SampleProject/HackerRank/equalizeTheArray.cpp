/*
sort the array
max = 0
count = 1
for (i != arr.size && i != arr.size - 1){

    if arr[i] == arr[i + 1] -> count + 1
                               if count > max -> max = count
    else -> count = 1
}
return arr.size - max
*/
int equalizeArray(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int max = 1;
    int count = 1;
    for (int i = 0; i != arr.size() - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            count++;
            if (count > max) {
                max = count;
            }
        }
        else {
            count = 1;
        }
    }
    cout << "max = " << max;
    return arr.size() - max;
}