#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int cnt = 0;
    
    for(int i = 0; i < n.size(); ++i){
        cin >> n[i];
        if(n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u')  cnt ++;
    }
    cout << cnt;
    return 0;
}
