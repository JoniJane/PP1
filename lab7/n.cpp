#include <bits/stdc++.h>
using namespace std;

bool f(int n, int k, int *a, int i) {
    if(i == n-1) return false;
    if(a[i+1] - a[i] <= k) return true;
    return f(n, k, a, i+1);
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);
    if(f(n, k, a, 0)) cout << "cheater";
    else cout << "no";
}