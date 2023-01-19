#include <bits/stdc++.h>
using namespace std;

bool number(string s) {
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] % 2 != 0) return false;
    }
    return true;
}
int main() {
    string s;
    cin >> s;
    int answer;
    number(s);
    if(number(s) == true) cout << "Valid";
    else cout << "Not valid";
}