#include <bits/stdc++.h>
using namespace std;

void f(string s) {
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') cout << "";
        else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') cout << "";
        else cout << s[i];
    }
}

int main() {
    string s;
    getline(cin, s);
    f(s);
}