#include <bits/stdc++.h>
using namespace std;

bool f(string n, string s ,int i) {
    /*if(n[i] == s[i]) {return true;}
    else if(n[i] != s[i]) {return false;}
    return f(n, s, i+1);*/
    if(i == n.size()) return true;
    if(s[i] != s[s.size() - 1 - i]) return false;
    return f(n, i+1);
}

int main() {
    string n;
    cin >> n;
    //string s = n;
    //reverse(s.begin(), s.end());

    if(f(n, s, 0) == true) cout << "Yes";
    else cout << "No";
}