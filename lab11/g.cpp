#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, set <int> > mp;
    
    for (int i = 0; i < n; i++) {
        string s;
        int a;
        cin >> s >> a;
        mp[s].insert(a);
    }
    map <string, set <int> > :: iterator it;
    for (it = mp.begin(); it != mp.end(); ++it) {
        if ((*it).second.size() > 2) cout << (*it).first << " " << "+1" << endl;
        else cout << (*it).first << " " << "NO BONUS" << endl;
    }      
}
