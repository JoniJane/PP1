#include <bits/stdc++.h>
using namespace std;
int f(int n){
    int sum = 0;
    int c = n % 10;
    while(n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    if(sum % c == 0) cout << "Yes";
    else cout << "No";
}

int main() {
    int n;
    cin >> n;
    f(n);
}