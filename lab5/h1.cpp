#include <bits/stdc++.h>
using namespace std;

int cnt[10];
string s;
int main() {
    cin >> s;
    for(int i = 0; i < s.size(); i ++) {
        cnt[s[i] - '0']++; //1 - 2   2 - 1 3 - 2  i - число, cnt[i] - количество
    }
    int max = INT_MIN, min = INT_MAX;
    
    for(int i = 0; i < 10; i++) {
        if(cnt[i] != 0 && cnt[i] > max) max = cnt[i];
        if(cnt[i] != 0 && cnt[i] < min) min = cnt[i];
    }
    if(max == min) cout << "YES";
    else cout << "NO";
    return 0;
}