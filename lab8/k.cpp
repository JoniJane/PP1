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
    int k;
    cin >> k;
    int sum = 0;

    sort(v.rbegin(), v.rend());

    for(int i = 0; i < k; ++i) {
        sum += v[i];
    }
    cout << sum;
}