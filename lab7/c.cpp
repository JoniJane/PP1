#include <bits/stdc++.h> 
using namespace std;

bool f(int n, int *a ,int m, int i) {
    if(i < n) {
        if(a[i] == m) return true;
    }
    else {
        return false;
    }
    return f(n,a,m,i+1);
}
int main() {
    int n,m;
    cin >> n;
    int a[n];
    for(int i = 0; i <n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    if(f(n,a,m,0)) cout << "Yes";
    else cout << "No";
}