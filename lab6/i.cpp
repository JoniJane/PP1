#include <bits/stdc++.h>
using namespace std;

string f(string s) {
    for(int i = 0; i < s.size(); ++i) {
        if(i % 2 == 0) s[i] = char(toupper(s[i]));
    }
    return(s);
}

int main() {
    string s;
    cin >> s;
    f(s);
    cout << f(s);
}