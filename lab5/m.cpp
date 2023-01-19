#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, c;
    cin >> s >> c;
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s.substr(i, c.size()) == c) cnt++;
    }
    if(cnt == n) cout << "YES";
    else cout << "NO";

}