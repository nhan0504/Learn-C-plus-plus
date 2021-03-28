/*int min = scores[0]
int max = scorse[0]
if *it < min -> min + 1
                      min = scores[i]
   *it > max -> max + 1
                      max + 1
vector res;
res pushback min , max
return res
*/
vector<int> breakingRecords(vector<int> scores) {
    int min = scores[0];
    int max = scores[0];
    int minCount = 0;
    int maxCount = 0;
    for (vector<int>::iterator it = scores.begin(); it != scores.end(); it++) {
        if (*it < min) {
            minCount++;
            min = *it;
        }
        if (*it > max) {
            maxCount++;
            max = *it;
        }
    }
    vector<int> res;
    res.push_back(maxCount);
    res.push_back(minCount);
    return res;
}