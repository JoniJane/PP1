#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string p = s;

    reverse(p.begin(), p.end());
    if(p == s) cout << "YES";
    else cout << "NO";
}