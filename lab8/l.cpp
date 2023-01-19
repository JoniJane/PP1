#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    //vector <int> v;
    set <int> v;

    for(int i = 0; i < n; ++i) {
        cin >> a;
        //v.push_back(a);
        v.insert(a);
    }
    cout << v.size() << ' ' ;

    /*int cnt = 0;
    for(int i = 0; i < v.size(); ++i) {
        if(v[i] != v[i+1]) cnt++;
    }
    cout << cnt;*/
}