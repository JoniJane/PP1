#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    string s;
    map <string, int> mp;
    for(int i = 0; i < n; ++i) {
        cin >> s >> m; 
        mp[s] += m; 
    }
    map <string, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); ++it) {
        cout << it -> first << ' ' << it -> second << endl;
    }
}