#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> mp;
    double sum = 0;
    for(int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        for(int j = 0; j < m; ++j) {
            string s;
            int k;
            cin >> s >> k;
            mp[s] += k;
            sum += k;
        }
    }
    map <string, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << ' ' << (it->second*100) / sum <<endl;
    }
}