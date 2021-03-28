/*
jump = 0
run through vector c
iterator i = c.begin
if (c[i + 2] != 1)
    i += 2
    jump++
else if (c[i + 1] != 1)
    i += 1
    jump++
return jump
*/
int jumpingOnClouds(vector<int> c) {
    int jump = 0;
    vector<int>::iterator i = c.begin();
    while (i != c.end()) {
        if (i <= c.end() - 3 && *(i + 2) != 1) {
            i += 2;
            jump++;
        }
        else {
            if ((i + 1) != c.end() && *(i + 1) != 1) {
                i++;
                jump++;
            }
            else {
                i++;
            }
        }
    }
    return jump;
}

//Shorter algorithm
int jumpingOnClouds(vector<int> c) {
    int jump = 0;
    vector<int>::iterator i = c.begin();
    while (i != c.end() - 1) {
        if (i <= c.end() - 3 && *(i + 2) == 0) {
            i += 2;
            jump++;
        }
        else {
            i++;
            jump++;
        }
    }
    return jump;
}