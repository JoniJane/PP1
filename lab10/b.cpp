#include <bits/stdc++.h>
using namespace std;

long long f(long long b, long long p){
    if(p == 0) return 1;
    if(p == 1) return b;
    return b * f(b, p - 1);
}

long long generate(int n) {
    for(long long i = 0; i <= n; ++i) {
        cout << f(i, i) <<' ';
    }
    
}

int main() {
    long long n;
    cin >> n;
    generate(n);
}