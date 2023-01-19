#include <bits/stdc++.h>
using namespace std;

void f(int m, int *x, int *y) {
    int z[m];
    for(int i = 0; i < m; i++) {
        z[i] = abs(x[i] - y[i]);
    } for(int i = 0; i < m; i++) {
        cout << z[i] << ' ';
    }
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    } for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    f(n, a, b);
}