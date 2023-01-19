#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    
    map <string, int> m;
    for(int i = 0; i < n; ++i) {
        cin >> s;
        m[s]++; 
    }
    int cnt = 0;
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        if(it -> second == 3) cnt++;
    }

    cout << cnt;
}