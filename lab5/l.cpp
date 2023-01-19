#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = s;
    sort(t.begin(), t.end());
    if(t == s) cout << "YES";
    else cout << "NO";
}
