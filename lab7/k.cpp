#include <bits/stdc++.h>
using namespace std;
int maxi = 0;
int f(string n, int i) {
    if(i >= n.size()) {return maxi;}
    if(n[i] - '0'> maxi) { maxi = n[i] - '0'; }
    return f(n, i+1);
}

int main() {
    string n;
    cin >> n;
    cout << f(n, 0);
}