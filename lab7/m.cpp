#include <bits/stdc++.h>
using namespace std;

void f(int n, int i) {
    /*if(n== 0) return;
    f(n-1);
    cout << n << ' '; */
    while(i <= n) {
    if(i > 0) {cout << i << ' ';}
    return f(n, i+1);
    }

}
int main() {
    int n;
    cin >> n;
    f(n, 1);
    //cout << f(n);
}