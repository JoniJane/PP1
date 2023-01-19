#include <iostream>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    long long sum = 0;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i <= l; ++i){
        sum = sum + a[i];
    }
    cout << sum;
}
