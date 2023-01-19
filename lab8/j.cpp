#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector <int> v;
    
    for(int i = 0;  i < n; ++i) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    cout << v[v.size()-1] - v[0];
}