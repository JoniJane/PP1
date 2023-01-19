#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }
    int k, l;
    cin >> k >> l;
    v.insert(v.begin() + k, l);
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }
}