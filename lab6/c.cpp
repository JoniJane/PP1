#include <bits/stdc++.h>
using namespace std;

int f(int n, int *a, int *b) {
    int cnt = 0;
    int x[100], y[100];
    for (int i = 1; i <= 100; ++i){
        x[i] = 0;
        y[i] = 0;
    }
    for (int i = 1; i <= n; ++i){
        x[a[i]]++; 
        y[b[i]]++;
    }
    for (int i = 1; i <= 100; ++i){
        cnt += min(x[i], y[i]);
    }
    return cnt;
}
int main () {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
    cin >> b[i];
    }
    cout << f(n, a, b);
    return 0;
}