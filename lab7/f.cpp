#include <bits/stdc++.h>
using namespace std;

int f(string s, int i, int cnt) {
    if(i >= s.size()) {
        return cnt;
    }
    if((s[i] -'0') % 2 == 0) {
        return f(s, i+1, cnt+1);
    }
    return f(s, i+1, cnt);
}

int main() {
    string s;
    cin >> s;
    cout << f(s, 0, 0);
}