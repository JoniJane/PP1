#include <bits/stdc++.h>
using namespace std;
int sum_of_n(int n){
    int sum = 0, x;
    while(n > 0) {
        x = n %10;
        sum += x;
        n = n / 10;
    }
    return(sum);
}


int main() {
    int n;
    cin >> n;
    sum_of_n(n);
    cout << sum_of_n(n);
}