#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,cnt = 0;
    cin >> n;
    map <int, int> m;

    for(int i = 0; i < n; ++i) { // 
        int a;
        cin >> a;
        m[a]++;
    }
    map <int, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        if(it -> second >= 2) cnt++;
    }
    cout << cnt;
}