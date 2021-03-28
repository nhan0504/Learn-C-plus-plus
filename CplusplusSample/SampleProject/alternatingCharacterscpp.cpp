/*
iter i
erase = 0
while i != end - 1
    if *i = *(i+1) -> erase i
                      erase + 1
    else -> i++
return erase
*/
int alternatingCharacters(string s) {
    int erase = 0;
    string::iterator i = s.begin();
    while (i != s.end() - 1) {
        if (*i == *(i + 1)) {
            s.erase(i);
            erase++;
        }
        else {
            i++;
        }
    }
    return erase;
}