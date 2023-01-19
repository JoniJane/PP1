#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int cnt = 0;

    /*for(int i = 0; i < t.size() ; i += s.size()){
        if(t.substr(i,s.size()) != s){ 
            cout << "No";
            return 0;
        } 
    }
    cout << "Yes";*/
    for(int i = 0; i < t.size(); i += s.size()) {
        if(t.substr(i,s.size()) == s) cnt++;
    }
    if(cnt == t.size() / s.size() && t.size() % s.size() == 0) cout << "YES";
    else cout << "NO";
}