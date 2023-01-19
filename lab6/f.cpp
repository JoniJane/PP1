#include <bits/stdc++.h>
using namespace std;

void f(string s, int n) {
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(/*s[i] >= '0' && s[i] <= '9'*/ isdigit(s[i])) cnt++;
    }
    if(cnt >= n) cout << "YES";
    else cout << "NO";
   
}

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    f(s,n);
}