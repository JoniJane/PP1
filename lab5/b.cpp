#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
    if(islower(s[i])) {
       s[i] = char(toupper(s[i]));
    }
    cout << s[i];
    }
   
}