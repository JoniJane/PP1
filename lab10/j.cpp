#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k, a;
    cin >> n >> k;
    vector <int> v;

    for (int i=0; i<n; ++i) {
        cin >> a;
        v.push_back(a);
    }
    rotate(v.begin(),v.begin()+k,v.end());
    reverse(v.begin(),v.end());
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << ' ';
    }
}