#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector <int> v;
    for(int i =0; i < n; ++i) {
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < v.size(); ++i) {
        if(v[i] != v[v.size()-i-1])
        cout << "Instead of " << v[i] <<" here was "  << v[v.size()-1-i] << endl;
        else cout << "OK\n";
    }
}