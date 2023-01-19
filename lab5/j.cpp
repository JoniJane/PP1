#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    string b = a;
    a = a + a[0];
    b = a;
    reverse(b.begin(), b.end());
    if(b == a) cout << "YES";
    else cout << "NO";
    }