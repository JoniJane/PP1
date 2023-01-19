#include <bits/stdc++.h>
using namespace std;

int maxi(int n, int m, int l, int r){
    return max(max(n,m), max(l,r));
}
int main() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    cout << maxi(n,m,l,r);
}