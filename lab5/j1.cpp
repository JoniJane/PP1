#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int cnt = 0;

    for(int i = 0; i < n.size() / 2 ; ++i) { 
        if(n[i] == n[n.size() - 1 - i]) {
            cnt++;
        } else {
            if(cnt == n.size / 2) cout << "YES";
            else cout << "NO";
        }
    }
    }