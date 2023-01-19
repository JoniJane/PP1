#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] > m && m < a[i-1])
        cout << i;
        else if(a[i] == m)
        cout << i + 1;
        else 
        cout << n;
        return 0;
    }
}