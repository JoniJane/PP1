#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    a[n-1] == a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i-1] != a[i])
        cout << a[i-1];
    }
}