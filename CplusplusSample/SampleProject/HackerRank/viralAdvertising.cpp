/*
n = number of loop
i = 0
like = 0
start = 5
while i != n
newlike = start/2
start = newLike * 3
i++
*/
int viralAdvertising(int n) {
    int i = 0;
    int like = 0;
    int start = 5;
    while (i != n) {
        int newLike = start / 2;
        like += newLike;
        start = newLike * 3;
        i++;
    }
    return like;
}