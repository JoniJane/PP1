#include <bits/stdc++.h>
using namespace std;

long long f(long long sum) {
    int n;
    cin >> n;
    if(n == 0) {return sum;}
    return f(sum) + n;
}
int main() {
    cout << f(0);
}