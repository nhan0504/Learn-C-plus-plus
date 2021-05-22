/*
 max = 0
 sum = 0
 for (i < keyboard.size){
     for (j < drive>size){
         sum = keyboard[i] + drives[j];
         if b - sum >= 0 && sum > max -> max = sum
     }
     if max = 0 -> return -1
     else return max
 }
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int sum = 0;
    int max = 0;
    for (int i = 0; i != keyboards.size(); i++) {
        for (int j = 0; j != drives.size(); j++) {
            sum = keyboards[i] + drives[j];
            if (b - sum >= 0 && sum > max) {
                max = sum;
            }
        }
    }
    if (max == 0) {
        return -1;
    }
    else {
        return max;
    }
}