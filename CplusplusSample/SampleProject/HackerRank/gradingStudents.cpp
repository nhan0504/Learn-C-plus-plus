/*
Find the next multiple of 5: int mul = (*it/5 + 1) * 5
vector res
if mul >= 40 -> Compare mul - *it < 3 -> Round: *it = mul
                                      -> res pushback
else -> res pushback
return res

 */

vector<int> gradingStudents(vector<int> grades) {
    vector<int> res;
    for (vector<int>::iterator it = grades.begin(); it != grades.end(); it++) {
        int mul = (*it / 5 + 1) * 5;
        if (mul < 40) {
            res.push_back(*it);
        }
        else {
            if ((mul - *it) < 3) {
                *it = mul;
            }
            res.push_back(*it);
        }
    }
    return res;
}