#include <iostream>
#include<string>
using namespace std;

int main()
{
    int lower = 1;
    int upper = 2097151;
    
    int i = 0;
    while (i != 22) {
        int mid = (lower + upper) / 2;
        cout << "mid = " << mid << endl;
        string str;
        cin >> str;
        if (str == ">") {
            lower = mid + 1;
        }
        else {
            upper = mid - 1;
        }
        i++;
    }
}


