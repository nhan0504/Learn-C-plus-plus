/*
create map<int,int> hold number of sock in each type
i = begin;
while (i != end)
    map[*i]++;
    i++;
number of pair = 0
i = 0;
run through map while (i != map.size)
    number of pair += map[i]/2
    i++
return number of pair
*/
int sockMerchant(int n, vector<int> ar) {
    map<int, int> sockTypes;
    vector<int>::iterator it = ar.begin();
    while (it != ar.end()) {
        sockTypes[*it]++;
        it++;
    }

    map<int, int>::iterator i = sockTypes.begin();
    int pair = 0;
    while (i != sockTypes.end()) {
        pair += i->second / 2;
        i++;
    }
    return pair;
}