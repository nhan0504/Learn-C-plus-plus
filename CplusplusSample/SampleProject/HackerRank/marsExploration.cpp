/*
int i = 0
while i != size
pos = i % 3
if pos = 0 || pos = 2 -> if *i = s -> i++
                         else -> change++
                                 i++
else -> if *i = O -> i++
        else change++
             i++
return change
*/
int marsExploration(string s) {
    string::size_type i = 0;
    string::size_type size = s.size();
    int change = 0;
    int pos = 0;
    while (i != size) {
        pos = i % 3;
        if (pos == 0 || pos == 2) {
            if (s[i] != 'S') {
                change++;
            }
            i++;
        }
        else {
            if (s[i] != 'O') {
                change++;
            }
            i++;
        }
    }
    return change;
}