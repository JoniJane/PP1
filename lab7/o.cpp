#include <bits/stdc++.h>
using namespace std;

string s = "";
string f(int n, int k) {
    if(n==0) {
        reverse(s.begin(), s.end());
        return s;
    }
    if(n%k < 10) {
        s += (n%k + '0'); /// 48
    }
    else {
        s += (n%k + '7'); // 55
    }
    return f(n/k, k);
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << f(n, k);
}