#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int sume = 0;
    int sumo = 0;

    for(int i = 0; i < n.size(); ++i) {
        if(i % 2 == 0) {
            sume += n[i];
        } else {
            sumo += n[i];
        }
    }
    if(sume == sumo) cout << "YES";
    else cout << "NO";
    return 0;
}