#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int cnt = 0;
    size_t pos = 0;

    while(true) {
    pos = s.find(t,pos);
    if(pos == string::npos) break;
    else cnt++;
    pos++;
    }
    if(cnt >= 1) cout << "YES";
    else cout << "NO";
}