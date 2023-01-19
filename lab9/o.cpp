#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    map <string, string> mp;
    for(int i = 0; i < n; ++i) {
        string l, p;
        cin >> l >> p;  
        mp[l] = p;
    }
    cin >> m;
    while(m--) {
        string l2, p2;
        cin >> l2 >> p2;
     if(mp[l2] == "") cout << "login error\n";
     else if(mp[l2] != p2) cout << "password error\n";
     else cout << "correct password\n";
    } 
} 